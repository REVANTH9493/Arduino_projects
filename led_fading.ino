int led = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  // analogWrite(led, 255);      // 0 to 255 is the range and 0 - LOW , 1- HIGH
  // delay(500);
  // analogWrite(led, 0);
  // delay(500);
  for(Int i = 0; i<=255; i++){
    analogWrite(led, i);
    delay(5);
  }

  for(Int j=255; j>=0; j--){
    analogWrite(led, j);
    delay(5);
  }
}
