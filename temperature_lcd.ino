// DHT 11 - Digital Humidity and Temperature sensor
// ds18b20 is a waterproof temperature sensor

#include "DHT.h"
#include "LiquidCrystal_I2C.h"
LiquidCrystal_I2C lcd(0x27,16,2);

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Serial.println(F("DHT11 test!"));
  dht.begin();
  lcd.backlight();
  lcd.setBacklight(HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  if(isnan(h) || isnan(t) || isnan(f)){
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  lcd.setCursor(0,0);
  lcd.print("Huimidiy: ");
  lcd.print(h);
  lcd.print("%");

  lcd.setCursor(0,1);
  lcd.print("Temperature: ");
  lcd.print(t);
  lcd.print("C");
  delay(50);
}
