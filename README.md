# ESP32 LED Blinking 💡

## 📌 Project Description

This is a simple LED blinking project using an ESP32 DevKit V1 and Arduino IDE.

In this project, an LED is connected to GPIO 4 of the ESP32. The LED turns ON for 1 second and OFF for 1 second continuously.

## 🛠️ Components Required

- ESP32 DevKit V1
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires
- USB Cable

## 🔌 Circuit Connection

ESP32 GPIO 4 → 220Ω Resistor → LED Long Leg (+)

LED Short Leg (-) → ESP32 GND

## 💻 Software Used

- Arduino IDE
- ESP32 Board Package

## ⚙️ Working

The ESP32 controls the LED connected to GPIO 4.

- LED ON → 1 second
- LED OFF → 1 second
- The process repeats continuously.

## 📂 Project Files

- `ledblinking.ino` - Arduino source code
- `README.md` - Project documentation

## 🚀 Future Improvements

- Add a push button to control the LED
- Control the LED using Wi-Fi
- Control the LED using a mobile application
- Add multiple LEDs

## 👨‍💻 Author

**Chaithanya Raju Potturi**

## 🎯 Project Goal

This project helps to understand ESP32 GPIO control, digital output, and basic Arduino programming.
