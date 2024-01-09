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

  +---------------------+<br>
  |      Arduino Nano   |<br>
  +---------------------+<br>
            |<br>
            |<br>
  +----A4 (SDA)--------- LCD (I2C)  <br>
  |         |<br>
  |         |<br>
  +----A5 (SCL)--------- LCD (I2C)<br>
  |         |<br>
  |         |<br>
  +----2 -------------- DS18B20 Temperature Sensor<br>
  |         |<br>
  |         |<br>
  +----7 -------------- Positive (+) lead of Buzzer<br>
                      |<br>
                      |<br>
                  GND -------------- Negative (-) lead of Buzzer<br>

In simpler language : <br>

Connect the SDA pin of the LCD to A4 on the Arduino Nano.<br>
Connect the SCL pin of the LCD to A5 on the Arduino Nano.<br>
Connect the positive (+) lead of the buzzer to pin 7, and the negative (-) lead to the ground (GND) of the Arduino.<br>
Connect the DS18B20 temperature sensor to pin 2 of the Arduino Nano.<br>
## Usage

1. Connect the components according to the circuit diagram.
2. Upload the `main.ino` sketch to your Arduino Nano using the Arduino IDE.
3. Adjust the `alarmThreshold` variable in the sketch to your desired temperature threshold.
4. Power up the Arduino Nano, and the LCD will display the real-time temperature.
5. The buzzer will sound an alarm if the temperature exceeds the set threshold.

## License

This project is licensed under the [MIT License](extras/LICENSE.txt).
