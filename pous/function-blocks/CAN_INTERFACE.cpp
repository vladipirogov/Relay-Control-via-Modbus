FUNCTION_BLOCK CAN_INTERFACE
VAR_INPUT
	ID_FILTER : int := 300;
	ID_STATE : int := 310;
	STATE_PERIOD : int := 500;
	INPUT_ADDRESS : int := 0;
	NUM_OF_INPUT : int := 1;
	OUTPUT_ADDRESS : int := 2;
	NUM_OF_OUTPUT : int := 1;
END_VAR

VAR_OUTPUT
	ERR : bool;
END_VAR
#include <CAN.h>
#include <stdint.h>

// Access OpenPLC %MW memory words via int_memory[] declared in glueVars.c
// int_memory[n] is IEC_UINT* pointing to %MW{n}  (uint16_t)
extern IEC_UINT *int_memory[];
static const int MAX_MEMORY_WORDS = 20;
static const int MAX_CAN_WORDS    = 4;  // CAN frame = 8 bytes = 4 x uint16_t

const int CAN_CS_PIN  = 17;
const int CAN_INT_PIN = 20;

// RX staging buffer filled by callback, consumed in loop()
static volatile bool    _rx_ready = false;
static volatile uint8_t _rx_buf[8];
static volatile int     _rx_len   = 0;

void onReceive(int packetSize) {
    // Hardware filter (CAN.filter) already ensures only ID_FILTER frames arrive.
    // Discard RTR frames and empty frames — they carry no payload.
    if (packetSize < 1 || CAN.packetRtr()) {
        while (CAN.available()) CAN.read();
        return;
    }
    int n = 0;
    while (CAN.available() && n < 8) {
        _rx_buf[n++] = CAN.read();
    }
    _rx_len   = n;
    _rx_ready = true;
}

void setup() {
    CAN.setPins(CAN_CS_PIN, CAN_INT_PIN);
    CAN.setClockFrequency(8E6);

    if (!CAN.begin(500E3)) {
        ERR = true;
        return;
    }

    // Hardware ID filter: only frames with exactly ID_FILTER pass to onReceive.
    // mask 0x7FF = all 11 standard-ID bits must match.
    CAN.filter(ID_FILTER, 0x7FF);
    CAN.onReceive(onReceive);
}

void loop() {

    // --- RX: decode received bytes as little-endian words → %MW{OUTPUT_ADDRESS+i} ---
    if (_rx_ready) {
        noInterrupts();
        uint8_t buf[8];
        int len = _rx_len;
        for (int i = 0; i < len; i++) buf[i] = _rx_buf[i];
        _rx_ready = false;
        interrupts();

        int words = len / 2;
        if (words > NUM_OF_OUTPUT)   words = NUM_OF_OUTPUT;
        if (words > MAX_CAN_WORDS)   words = MAX_CAN_WORDS;

        for (int i = 0; i < words; i++) {
            int idx = OUTPUT_ADDRESS + i;
            if (idx >= 0 && idx < MAX_MEMORY_WORDS && int_memory[idx]) {
                *int_memory[idx] = (IEC_UINT)buf[i * 2] |
                                   ((IEC_UINT)buf[i * 2 + 1] << 8);
            }
        }
    }

    // --- TX: read %MW{INPUT_ADDRESS+i} words → pack → send on ID_STATE ---
    static unsigned long last_tx = 0;
    if (millis() - last_tx > (unsigned long)STATE_PERIOD) {
        last_tx = millis();

        int words = NUM_OF_INPUT;
        if (words > MAX_CAN_WORDS) words = MAX_CAN_WORDS;

        CAN.beginPacket(ID_STATE);
        for (int i = 0; i < words; i++) {
            int idx = INPUT_ADDRESS + i;
            IEC_UINT val = (idx >= 0 && idx < MAX_MEMORY_WORDS && int_memory[idx])
                           ? *int_memory[idx] : 0;
            CAN.write((uint8_t)(val & 0xFF));
            CAN.write((uint8_t)(val >> 8));
        }
        CAN.endPacket();
    }
}

END_FUNCTION_BLOCK