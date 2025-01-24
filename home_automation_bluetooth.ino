int led = 13;
int en = 6;
int in1 = 3;
int in2 = 4;
int data;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(en, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() > 0){
    data = Serial.read();

    if(data == 'A'){
      analogWrite(led, 0);
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
      analogWrite(en, 0);
    }

    if(data == 'B'){
      analogWrite(led, 100);
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      analogWrite(en, 100);
    }

    if(data == 'C'){
      analogWrite(led, 255);
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      analogWrite(en, 255);
    }
  }

}
