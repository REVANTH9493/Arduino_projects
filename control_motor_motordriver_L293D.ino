int in1 = 2;
int in2 = 3;
int enable = 6;


void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(enable, 255);    //enable pin value ranges from 0 to 255 which changes the speed of the arduino
  delay(300);
}
