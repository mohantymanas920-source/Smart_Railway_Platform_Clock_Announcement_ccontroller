# 🚆 Smart Railway Platform Clock & Announcement Controller

**An Embedded Systems Project using LPC2148 ARM7 Microcontroller and Embedded C**

## 📌 Project Overview

The Smart Railway Platform Clock & Announcement Controller is an embedded railway platform information system developed using the LPC2148 ARM7 microcontroller.

The system integrates a Real-Time Clock (RTC), train scheduling, keypad-based data entry, LCD display, LED status indication, buzzer alerts, and external interrupt functionality into a single embedded application.

It maintains the current time, processes train schedules, displays upcoming train information, and indicates train status through LEDs and buzzer alerts.

## ✨ Key Features

- 🕐 RTC-based real-time clock
- 🚆 Multiple train schedule management
- 📺 16×2 LCD display
- ⌨️ 4×4 matrix keypad
- 🟢 Green LED – On Time
- 🟡 Yellow LED – Approaching
- 🔴 Red LED – Delayed
- 🔔 Buzzer alert
- ⚡ EINT0 external interrupt
- 📝 Menu-based schedule editing
- ⏱️ Arrival and departure time management
- 💻 Modular Embedded C programming
- 🧪 Proteus simulation

## 🧠 System Architecture

```text
              LPC2148 ARM7 MCU
                     |
        +------------+------------+
        |            |            |
       RTC         Keypad        LCD
        |            |            |
        +------------+------------+
                     |
           Train Schedule Processing
                     |
          +----------+----------+
          |          |          |
        GREEN      YELLOW       RED
       ON TIME   APPROACHING   DELAYED
                                 |
                               BUZZER
```

## 🎯 Project Objectives

- Develop a railway platform clock using LPC2148.
- Display date and time using an RTC.
- Maintain multiple train schedules.
- Display upcoming train information.
- Allow schedule entry and editing through a keypad.
- Indicate train status using LEDs.
- Generate buzzer alerts.
- Demonstrate external interrupt handling.
- Integrate multiple peripherals using Embedded C.

## 🔧 Hardware Requirements

| Component | Purpose |
|---|---|
| LPC2148 | Main ARM7 microcontroller |
| 16×2 LCD | Railway information display |
| 4×4 Keypad | User input |
| RTC | Real-time clock |
| Green LED | On-time indication |
| Yellow LED | Approaching indication |
| Red LED | Delayed indication |
| Buzzer | Audible alert |
| 12 MHz Crystal | Clock source |
| Resistors | LED current limiting |
| Power Supply | Circuit power |

## 💻 Software & Development Tools

| Tool | Usage |
|---|---|
| Embedded C | Programming language |
| Keil µVision | IDE and compiler |
| Proteus | Circuit simulation |
| Git | Version control |
| GitHub | Source code hosting |

## 📍 Pin Configuration

| Module | LPC2148 Pin |
|---|---|
| LCD Data | P0.8 – P0.15 |
| LCD RS | P0.16 |
| LCD RW | P0.17 |
| LCD EN | P0.18 |
| Buzzer | P0.19 |
| Green LED | P0.23 |
| Yellow LED | P0.24 |
| Red LED | P0.25 |
| Keypad Rows | P1.16 – P1.19 |
| Keypad Columns | P1.20 – P1.23 |
| EINT0 | P0.1 |

*Pin assignments should be verified against the final source code and Proteus schematic.*

## ⌨️ Keypad Operation

A 4×4 matrix keypad is used for menu navigation and data entry.

| Key | Function |
|---|---|
| 0–9 | Numeric data entry |
| B | Backspace |
| C | Clear |
| E | Enter |
| + / - | Navigation or value control |

## 🚦 Train Status Indication

| LED | Status | Meaning |
|---|---|---|
| 🟢 Green | On Time | Train is according to schedule |
| 🟡 Yellow | Approaching | Train is close to its scheduled event |
| 🔴 Red | Delayed | Train has a delay |

The buzzer provides an additional audible alert.

## 🕐 RTC Operation

The RTC provides the current time to the controller.

The controller compares the current time with the train schedule and processes the train status.

```text
       RTC
        |
   Current Time
        |
   Train Schedule
        |
   Time Comparison
        |
   +----+----+
   |    |    |
  ON   NEAR DELAYED
 TIME        |
   |    |    |
 GREEN YELLOW RED
              |
            BUZZER
```

## 📺 LCD Display

The 16×2 LCD displays:

- Current time and date
- Train number and train name
- Destination and platform number
- Arrival and departure time
- Train status
- Delay information

Example:

```text
12745 MANUGUR SF
MANUGUR P1 09:30
```

## 📝 Menu & Schedule Editing

The keypad provides a menu-based interface for editing railway information.

Example menu:

```text
       MAIN MENU

1. Edit RTC Time
2. Edit Train Time
3. Edit Arrival Time
4. Edit Departure Time
5. Edit Delay
6. Edit Platform
```

## ⚡ External Interrupt

EINT0 is used as an external interrupt input for triggering an editing request.

```text
External Input
      |
     EINT0
      |
Interrupt Service Routine
      |
  Edit Request
      |
Menu / Schedule Editing
```

## 🧪 Proteus Simulation

The project uses Proteus for circuit simulation.

The simulation includes the LPC2148 microcontroller, LCD, keypad, RTC, LEDs, buzzer, and associated circuit connections.

The compiled Keil HEX file can be loaded into the LPC2148 Proteus model.

## 🗂️ Project Structure

```text
Smart_Railway_Platform_Clock/
│
├── header/
│   ├── lcd.h
│   ├── rtc.h
│   ├── buzzer.h
│   └── ...
│
├── src/
│   ├── main.c
│   ├── lcd.c
│   ├── rtc.c
│   ├── buzzer.c
│   └── ...
│
├── image/
│   ├── circuit_diagram
│   └── project_screenshots
│
├── Startups.s
├── .gitignore
└── README.md
```

*The structure above is illustrative. Refer to the actual repository for the complete file list.*

## 📚 Concepts Demonstrated

- ARM7 LPC2148 architecture
- Embedded C programming
- GPIO programming
- LCD interfacing
- Matrix keypad scanning
- RTC interfacing
- External interrupts
- VIC interrupt controller
- Structures and arrays
- Modular programming
- Time comparison
- Peripheral integration
- Proteus simulation
- Embedded-system debugging

## 🚀 Future Enhancements

- 📢 Voice-based railway announcements
- 📡 GSM-based train notifications
- 🌐 IoT-based remote schedule updates
- 📱 Mobile application integration
- 💾 EEPROM/Flash-based train storage
- 🛰️ GPS-based train tracking
- 🛤️ Multiple-platform support
- 🔊 Pre-recorded voice announcements

## 📊 Project Status

**Embedded Systems Prototype**

An academic embedded-systems project integrating railway clock functionality, train scheduling, LCD display, keypad input, LED status indication, buzzer alerts, and external interrupt handling.

## ⭐ Conclusion

The Smart Railway Platform Clock & Announcement Controller demonstrates the integration of multiple embedded peripherals into a practical railway information prototype.

It provides hands-on experience in ARM7 microcontroller programming, Embedded C, peripheral interfacing, interrupt handling, RTC operation, and modular embedded-system development.

**Technologies:** LPC2148 ARM7 | Embedded C | Keil µVision | Proteus | GitHub
