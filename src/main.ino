#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

LiquidCrystal_I2C lcd(0x27, 16, 2);  // I2C address 0x27, 16 columns, 2 rows

const int buzzerPin = 7;
const float alarmThreshold = 25.0;  // Set your desired temperature threshold

void setup() {
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.print("Digital Thermometer");
  
  sensors.begin();
  
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  sensors.requestTemperatures();
  float temperature = sensors.getTempCByIndex(0);
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: " + String(temperature, 1) + " C");

  if (temperature > alarmThreshold) {
    soundAlarm();
    lcd.setCursor(0, 1);
    lcd.print("ALARM! Temp exceeded");
  } else {
    noTone(buzzerPin);
  }

  delay(1000);  // Update every second
}

void soundAlarm() {
  tone(buzzerPin, 1000);  // You can adjust the frequency as needed
  delay(1000);           // Sound for 1 second (adjust as needed)
  noTone(buzzerPin);
  delay(1000);           // Pause for 1 second
}
