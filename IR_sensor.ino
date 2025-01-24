// C++ code
//
// detect the IR radiations or any object. can be used as a radar

int ir = 7;
int x;
int led = 8;
int buzzer = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(ir, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  x = digitalRead(ir);
  Serial.println(x);
  delay(1000);
  if(x == 0){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  else{
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }
}