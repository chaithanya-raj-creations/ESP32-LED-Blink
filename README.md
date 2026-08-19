# ESP32 LED Blinking Project

A basic Embedded Systems project using ESP32 DevKit V1 to blink an LED using GPIO 4.

## 🔧 Components Used

- ESP32 DevKit V1
- LED
- Resistor
- Breadboard
- Jumper Wires
- USB Cable

## 💻 Software

- Arduino IDE

## 📌 GPIO Used

- GPIO 4

## ⚙️ Project Description

In this project, an LED is connected to GPIO 4 of the ESP32.
The Arduino IDE is used to program the ESP32 to turn the LED ON and OFF at regular intervals.

## 🎥 Project Demonstration

[Watch the project video on YouTube](https://youtu.be/8VGNBTNp_18)

## 💡 Code

```cpp
#define LED_PIN 4

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  delay(1000);
}



