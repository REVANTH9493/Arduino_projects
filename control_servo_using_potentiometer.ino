#include <Servo.h>
Servo s;

int pot = A0;
int x;
int value;


void setup() {
  // put your setup code here, to run once:
  pinMode(pot, INPUT);
  s.attach(9);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(pot);
  value = map(x, 0, 1023, 0, 180);
  s.write(value);

}
