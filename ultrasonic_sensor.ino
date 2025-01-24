//ultrasonic sensor which detects the distance of any object using s = d / t formula
int trig = 7;
int echo = 6;

long timeinmicro;
int distanceincm;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  timeinmicro = pulseIn(echo, HIGH);
  distanceincm = timeinmicro /29 /2;
  Serial.println(distanceincm);
}
