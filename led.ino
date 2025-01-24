//Inbuilt led is always pin no. 13
int led = 3;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  delay(1000);
  digitalWrite(led, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  digitalWrite(led, LOW);
  digitalWrite(LED_BUILTIN, HIGH);
}