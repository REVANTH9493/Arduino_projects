// Gas detector sensor (MQ6)

int mq = A0;
int x;
int buzz = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(mq, INPUT);
  pinMode(buzz, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(mq);
  if(x >= 150){
    Serial.println("Gas is leaking");
    digitalWrite(buzz, HIGH);
  }
  else{
    Serial.println("No gas leakage, you are safe!");
    digitalWrite(buzz, LOW);
  }

}
