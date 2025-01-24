#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,16,2);

// C++ code
//
void setup()
{
  Serial.begin(9600);
  lcd.backlight();
  lcd.setBacklight(HIGH);
}

void loop()
{
  lcd.setCursor(0, 0);
  lcd.print("N. Revanth");
}