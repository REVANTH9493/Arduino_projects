// Soil Moisture sensor also known as Humidity sensor and Hygrometer or TENSIOMETER

int sensor_pin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensor_pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor_data = digitalRead(sensor_pin);
  Serial.println(sensor_data);

  if(sensor_data >= 1000){
  Serial.println("There is no moisture");
  }
  else if(sensor_data >=500 && sensor_data<=1000 ){
  Serial.println("There is some moisture");
  }
  else{
    Serial.println("The soil is very wet");
  }
}
