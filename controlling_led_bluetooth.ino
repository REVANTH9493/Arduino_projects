int led = 13;
int data;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() > 0){
    data = Serial.read();
    Serial.print(data);
  }

  if(data == 'ON'){
    digitalWrite(led, HIGH);
  }

  if(data == 'OFF'){
    digitalWrite(led, LOW);
  }

}
