int led = 11;
int pot = A0;
int x;
int y;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(pot);
  y = map(x,0,1023,0,255);
  analogWrite(led, y);

}

