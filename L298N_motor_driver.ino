// L298n motor driver
// it rotates clock wise when a is low and b is high and rotates in anticlock wise when a is high and b is low.
int a = 8;
int b = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  delay(5000);

  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  delay(5000);

}
