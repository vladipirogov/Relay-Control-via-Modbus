FUNCTION_BLOCK CAN_INTERFACE
VAR_INPUT
	ID_FILTER : int := 300;
	ID_STATE : int := 310;
	STATE_PERIOD : int := 500;
	K1_STATE : bool;
	K2_STATE : bool;
END_VAR

VAR_OUTPUT
	K1_ON : bool;
	K2_ON : bool;
	K1_OFF : bool;
	K2_OFF : bool;
	ERR : bool;
END_VAR
#include <CAN.h>

const int CAN_CS_PIN  = 17;
const int CAN_INT_PIN = 20;

// Pending pulse flags set by callback, consumed in loop()
static volatile bool _pending_k1_on  = false;
static volatile bool _pending_k1_off = false;
static volatile bool _pending_k2_on  = false;
static volatile bool _pending_k2_off = false;
static long _id_filter_cached = 300;

// Protocol: byte0 = mask (bit0=K1, bit1=K2), byte1 = values (same bits)
// 12C#01 01 → K1_ON   | 12C#01 00 → K1_OFF
// 12C#02 02 → K2_ON   | 12C#02 00 → K2_OFF
// 12C#03 03 → both ON | 12C#03 00 → both OFF
void onReceive(int packetSize) {
    if (packetSize < 1) return;

    long id = CAN.packetId();
    if (id != _id_filter_cached || CAN.packetRtr()) {
        while (CAN.available()) CAN.read();
        return;
    }

    uint8_t rxBuf[8];
    int i = 0;
    while (CAN.available() && i < 8) {
        rxBuf[i++] = CAN.read();
    }

    uint8_t mask   = rxBuf[0];
    uint8_t values = (i >= 2) ? rxBuf[1] : 0x00;

    if (mask & 0x01) {
        if (values & 0x01) _pending_k1_on  = true;
        else               _pending_k1_off = true;
    }
    if (mask & 0x02) {
        if (values & 0x02) _pending_k2_on  = true;
        else               _pending_k2_off = true;
    }
}

void setup() {
    _id_filter_cached = ID_FILTER;

    CAN.setPins(CAN_CS_PIN, CAN_INT_PIN);
    CAN.setClockFrequency(8E6);

    if (!CAN.begin(500E3)) {
        ERR = true;
        return;
    }

    CAN.onReceive(onReceive);
}

void loop() {

    // Reset pulse outputs at start of every scan cycle
    K1_ON  = false;
    K1_OFF = false;
    K2_ON  = false;
    K2_OFF = false;

    // Safely consume pending flags from callback
    noInterrupts();
    bool p_k1_on  = _pending_k1_on;
    bool p_k1_off = _pending_k1_off;
    bool p_k2_on  = _pending_k2_on;
    bool p_k2_off = _pending_k2_off;
    _pending_k1_on = _pending_k1_off = false;
    _pending_k2_on = _pending_k2_off = false;
    interrupts();

    if (p_k1_on)  K1_ON  = true;
    if (p_k1_off) K1_OFF = true;
    if (p_k2_on)  K2_ON  = true;
    if (p_k2_off) K2_OFF = true;

    // --- TX status every 100ms using K1_STATE / K2_STATE inputs ---
    static unsigned long last_tx = 0;
    if (millis() - last_tx > STATE_PERIOD) {
        last_tx = millis();

        CAN.beginPacket(ID_STATE);
        uint8_t status = 0;
        if (K1_STATE) status |= 0x01;
        if (K2_STATE) status |= 0x02;
        CAN.write(status);
        CAN.endPacket();
    }
}

END_FUNCTION_BLOCK