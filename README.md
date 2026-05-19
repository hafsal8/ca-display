# Custom 4-Digit 7-Segment Display Driver using ESP8266 + 74HC595

## Overview

This project is a custom-built 4-digit 7-segment display driver created from scratch using an ESP8266, 74HC595 shift register, and BC557 transistors.

Instead of using ready-made display driver modules such as TM1637 or MAX7219, the entire multiplexing and segment control logic was implemented manually to better understand low-level embedded systems concepts.

---

# Features

* Custom multiplexed 4-digit display driver
* GPIO expansion using 74HC595 shift register
* Common-anode display support
* BC557 transistor-based digit switching
* Decimal point support
* Dynamic segment generation
* Manual bit-level segment mapping
* No external display libraries used

---

# Components Used

* ESP8266 (NodeMCU)
* 4-Digit 7-Segment Display (Common Anode)
* 74HC595 Shift Register
* BC557 PNP Transistors
* 220Ω Resistors
* Capacitors
* Perfboard / PCB
* Jumper wires

---

# Circuit Concept

## Shift Register Connections

| 74HC595 Pin | ESP8266 Pin |
| ----------- | ----------- |
| DS          | D5          |
| SH_CP       | D6          |
| ST_CP       | D7          |

---

## Digit Control Pins

| Digit   | ESP8266 Pin |
| ------- | ----------- |
| Digit 1 | D1          |
| Digit 2 | D2          |
| Digit 3 | D3          |
| Digit 4 | D4          |

---

# Key Concepts Learned

This project helped me understand:

* Shift register interfacing
* Multiplexing techniques
* Transistor switching
* Common-anode display logic
* Bit-level segment encoding
* Embedded systems debugging
* Hardware fault isolation
* Timing synchronization

---

# Biggest Challenges

During development, several issues had to be debugged manually:

* Incorrect segment mapping
* Wrong digit outputs
* Multiplexing ghosting
* Decimal point logic
* Weak solder joints
* Transistor wiring confusion
* Bit-order mismatches

The debugging process involved testing:

* each segment individually
* each digit individually
* transistor paths
* segment bit mapping

This project became a great hands-on embedded systems learning experience.

---

# Future Improvements

* PCB design using KiCad
* RTC clock integration
* MQTT / Firebase integration
* Smart energy meter integration
* Sensor data display
* WiFi-connected status display

---

# Final Result

Successfully built a fully working custom 4-digit 7-segment display driver using ESP8266 and 74HC595 without relying on ready-made display driver modules or libraries.

---

# Author

Muhammed Hafsal

Embedded Systems & IoT Enthusiast 🚀
