# OpenPLC DIY Automation — Relay Control via Modbus RTU/TCP

A DIY industrial automation demo project that programs **Raspberry Pi Pico W** as an OpenPLC node and controls relays remotely over **Modbus RTU** and **Modbus TCP**. Part of a broader ASU-DIY series that also integrates CAN bus and PMSM motor control.

---

## Overview

This project demonstrates how to:

- Connect **Raspberry Pi Pico W** as a Modbus RTU Slave to an **Orange Pi 4 Pro** single-board computer
- Program the microcontroller in **OpenPLC Editor v4** using Ladder Diagram (LD) — IEC 61131-3 standard
- Control two relays remotely via Modbus in both **manual** and **automatic** modes
- Configure the **RS485 CAN HAT** shield on Orange Pi 4 Pro
- Use **QModbus** to test Modbus communication before integrating with Node-RED

---

## Hardware Components

| Component | Role |
|-----------|------|
| Raspberry Pi Pico W (RP2040) | OpenPLC Slave — remote I/O node |
| Orange Pi 4 Pro | Master — runs Node-RED and N8N |
| RS485 CAN HAT (Waveshare) | CAN bus (MCP2515) + Modbus RS485 (SP3485/MAX485) |
| SRD-05VDC-SL-C relay modules (K1, K2) | Controlled output devices |
| STM32-IHM03 (NUCLEO-G431RB) | PMSM motor control via CAN bus |
| Modbus module MAX485 | Connects Pico W to the RS485 bus |

> The RS485 CAN HAT is described at [waveshare.com/wiki/RS485_CAN_HAT](https://www.waveshare.com/wiki/RS485_CAN_HAT).

---

## RP2040 / Raspberry Pi Pico W — Pin Mapping

Output relays and input signals used in this project:

| Signal | PLC Address | GPIO Pin | Description |
|--------|-------------|----------|-------------|
| K1 output | `%QX0.0` | GP14 | Relay K1 coil |
| K2 output | `%QX0.1` | GP15 | Relay K2 coil |
| K1 ON input | `%IX0.3` | GP9 | Turn ON K1 |
| K1 OFF input | `%IX0.4` | GP10 | Turn OFF K1 |
| K2 ON input | `%IX0.5` | GP11 | Turn ON K2 |
| K2 OFF input | `%IX0.6` | GP12 | Turn OFF K2 |

### Modbus Register Map (RP2040)

| Modbus Data Type | PLC Address | Modbus Address | Size | Access |
|-----------------|-------------|----------------|------|--------|
| Discrete Output Coils | `%QX0.0` – `%QX6.7` | 0 – 55 | 1 bit | RW |
| Discrete Input Contacts | `%IX0.0` – `%IX6.7` | 0 – 55 | 1 bit | R |
| Analog Input Registers | `%IW0` – `%IW31` | 0 – 31 | 16 bit | R |
| Holding Registers | `%QW0` – `%QW31` | 0 – 31 | 16 bit | RW |
| Holding Registers (Memory 16-bit) | `%MW0` – `%MW19` | 32 – 51 | 16 bit | RW |
| Holding Registers (Memory 32-bit) | `%MD0` – `%MD19` | 52 – 91 | 32 bit | RW |
| Holding Registers (Memory 64-bit) | `%ML0` – `%ML19` | 92 – 171 | 64 bit | RW |

---

## Modbus Function Codes Used

| FC | Name | PLC Data | Operation |
|----|------|----------|-----------|
| FC01 | Read Coils | Digital outputs `%QX` | Read |
| FC02 | Read Discrete Inputs | Digital inputs `%IX` | Read |
| FC03 | Read Holding Registers | `%QW`, `%MW`, `%MD`, `%ML` | Read |
| FC04 | Read Input Registers | Analog inputs `%IW` | Read |
| FC05 | Write Single Coil | One `%QX` output | Write |
| FC06 | Write Single Register | One Holding Register (`%QW` or `%MW`) | Write |
| FC15 | Write Multiple Coils | Multiple `%QX` outputs | Write |
| FC16 | Write Multiple Registers | Multiple Holding Registers | Write |

Key registers for this project:

- **FC03** — Read `CYRCLE_STATE` (`%MW1`, Modbus addr 33) to monitor the automatic cycle step
- **FC05** — Write a coil to manually toggle K1/K2
- **FC06** — Write `CMD_WORD` (`%MW0`, Modbus addr 32) to issue a command
- **FC01** — Read `%QX0.0` and `%QX0.1` to check relay states

---

## OpenPLC Project Configuration

In **OpenPLC Editor v4** → `Device → Configuration`:

| Setting | Value |
|---------|-------|
| Device | Raspberry Pico W |
| Communication port | COM port (e.g., COM21) |
| Enable Modbus RTU | ✓ |
| Interface | Serial1 (UART0 — GP0/GP1) |
| Baud Rate | 115200 |
| Slave ID | 10 |
| RS485 EN Pin | GP3 |
| Enable Modbus TCP | ✓ |
| Enable DHCP | ✓ |
| Wi-Fi SSID / Password | *your network credentials* |

---

## PLC Logic — Ladder Diagram (LD)

### Manual Mode

Each relay (K1, K2) is controlled by rising-edge (`|P|`) digital input contacts with **self-latching** (seal-in):

```
---[P IX0.3]---+---( K1 )---
               |
---[ K1    ]---+

---[/ IX0.4]---( break K1 )
```

- Rising-edge `|P|` prevents the relay from re-triggering while the physical input stays high (button behaviour).
- The relay coil latches itself through its own normally-open contact.

### Automatic Mode — Command Word

Because OpenPLC v4 does not yet support bit-addressed memory markers (`%MX`), a **16-bit word** `CMD_WORD` (`%MW0`) is used together with EQ comparison instructions to derive control bits:

| CMD_WORD value | Effect |
|---------------|--------|
| 1 | CMD_1 = true |
| 2 | CMD_2 = true |
| 3 | CMD_3 = true |
| 4 | CMD_4 = true |
| 5 | Start automatic cycle (CYCLE_RUN = true) |

CMD_WORD is reset to 0 on every scan cycle after the command bit is latched.

### Automatic Cycle Sequence

Write `CMD_WORD = 5` via **FC06** to Modbus address 32 to trigger the cycle.

| Time (s) | CMD_WORD | CYRCLE_STATE | CYCLE_RUN_SET | K1 | K2 |
|----------|----------|--------------|---------------|----|----|
| 0 | 5 | 1 | 1 | 0 | 0 |
| 2 | 0 | 2 | 1 | 1 | 0 |
| 4 | 0 | 3 | 1 | 0 | 0 |
| 6 | 0 | 4 | 1 | 0 | 1 |
| 8 | 0 | 5 | 1 | 0 | 0 |
| 10 | 0 | 0 | 0 | 0 | 0 |

Each step uses a **TON** (On-Delay Timer) block with `PT = T#2s`.

---

## RS485 CAN HAT Setup on Orange Pi 4 Pro

### CAN bus (MCP2515)

The MCP2515 chip on the RS485 CAN HAT runs at **12 MHz**, not the default 8 MHz. Edit the device-tree overlay:

```dts
// fragment@0 in mcp2515.dts
clock-frequency = <12000000>;
```

Recompile:

```bash
sudo dtc -@ -I dts -O dtb -o /boot/dtb/allwinner/overlay/sun60i-a733-mcp2515.dtbo mcp2515.dts
```

Enable the overlay via `orangepi-config → System → Hardware`.

### UART for RS485 (SP3485)

Enable **UART7** in `orangepi-config → System → Hardware`. The RE/DE control pins of the SP3485 transceiver are driven automatically by an NPN transistor on the HAT — no additional GPIO wiring is needed.

---

## Testing with QModbus

Before connecting Node-RED, verify Modbus communication using **QModbus** (free, open-source):

- Download: [sourceforge.net/projects/qmodbus](https://sourceforge.net/projects/qmodbus/) or [github.com/ed-chemnitz/qmodbus](https://github.com/ed-chemnitz/qmodbus)

Steps:

1. Select **Modbus TCP** tab
2. Enter Pico W IP address; port **502**
3. Set Slave ID to **10** (or as configured)
4. Choose a Function Code, set Start Address and data
5. Click **Send**

---

## Known Limitations (OpenPLC v4)

- **Bit memory markers** (`%MX`) are not yet implemented — use `%MW` + EQ comparisons as a workaround.
- Modbus RTU Slave behaviour can be inconsistent in some edge cases; monitor the [OpenPLC forum](https://openplc.discussion.community/) for updates.
- This is a DIY prototype, **not** a production-grade PLC: no EMC shielding, no hardware watchdog, no industrial connectors.

---

## Resources

| Resource | Link |
|----------|------|
| OpenPLC Runtime v4 | https://github.com/Autonomy-Logic/openplc-runtime |
| OpenPLC Editor v4 | https://github.com/Autonomy-Logic/openplc-editor |
| OpenPLC Editor Docs | https://edge.autonomylogic.com/docs/openplc-editor |
| OpenPLC YouTube | https://www.youtube.com/@openplc |
| Modbus Addressing (RP2040) | https://old.autonomylogic.com/docs/2-5-modbus-addressing/ |
| RS485 CAN HAT | https://www.waveshare.com/wiki/RS485_CAN_HAT |
| Modbus RTU Basics | https://modbuskit.com/ru/blog/modbus-rtu-basic-tutorial |
| IEC 61131-3 | https://en.wikipedia.org/wiki/IEC_61131-3 |
| Previous article (CAN bus / STM32-IHM03) | https://habr.com/ru/articles/1023492/ |

---

## License

OpenPLC Runtime and Editor are released under the **MIT License**.
This project configuration and LD source are provided as-is for educational purposes.
