#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int voltageV = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(voltageV, INPUT);
  lcd.init();
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  int VoltageMsmt = analogRead(voltageV);
  float Vcalc = (5.0/1023)*VoltageMsmt;
  lcd.setCursor(0,0);
  lcd.print("BATT ");
  lcd.print(Vcalc);
}