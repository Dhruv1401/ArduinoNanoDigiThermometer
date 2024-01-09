# Arduino Nano Digital Thermometer with Alarm

A simple Arduino Nano project for a digital thermometer with an alarm. This project uses a DS18B20 temperature sensor, a 16x2 LCD with I2C interface, and a buzzer to sound an alarm when the temperature exceeds a specified threshold.

## Table of Contents

- [Features](#features)
- [Requirements](#requirements)
- [Circuit Diagram](#circuit-diagram)
- [Usage](#usage)
- [License](#license)

## Features

- Real-time temperature monitoring.
- Alarming when the temperature exceeds a user-defined threshold.
- 16x2 LCD display for temperature readout.
- Easy to configure and adapt for different projects.

## Requirements

- Arduino Nano
- DS18B20 temperature sensor
- 16x2 LCD with I2C interface
- Buzzer
- Arduino IDE with necessary libraries installed (OneWire, DallasTemperature, LiquidCrystal_I2C)

## Circuit Diagram

Arduino Nano
│
├── SDA (A4) ─────── LCD (I2C)
│
├── SCL (A5) ─────── LCD (I2C)
│
├── Pin 7 ───────── Positive Lead of Buzzer
│
├── GND ────────── Negative Lead of Buzzer
│
├── Pin 2 ───────── DS18B20 Temperature Sensor
│
└── Power Supply ── Provide power to the Arduino Nano

## Usage

1. Connect the components according to the circuit diagram.
2. Upload the `main.ino` sketch to your Arduino Nano using the Arduino IDE.
3. Adjust the `alarmThreshold` variable in the sketch to your desired temperature threshold.
4. Power up the Arduino Nano, and the LCD will display the real-time temperature.
5. The buzzer will sound an alarm if the temperature exceeds the set threshold.

## License

This project is licensed under the [MIT License](extras/LICENSE.txt).
