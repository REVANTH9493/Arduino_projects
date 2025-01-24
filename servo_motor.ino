#include <Servo.h>

Servo s;

void setup()
{
  s.attach(9);
}

void loop()
{
  s.write(0);
  delay(1000);
  s.write(90);
  delay(1000);
  s.write(180);
  delay(1000);
  s.write(90);
  delay(1000);
  s.write(0);
  delay(1000);
}