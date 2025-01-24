// DHT 11 - Digital Humidity and Temperature sensor
// ds18b20 is a waterproof temperature sensor

#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

int in1 = 3;
int in2 = 4;
int enable = 5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // Serial.println(F("DHT11 test!"));
  dht.begin();
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enable, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  float t = dht.readTemperature();

  if(isnan(t)){
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  Serial.print(F("% Temperature: "));
  Serial.print(t);
  Serial.print(F("C "));

  if(t <= 28){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    analogWrite(enable, 0);
  }

  if(t >= 29 && t <=30){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enable, 100);
  }

  if(t >= 30){
    
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enable, 255);
  }

}
