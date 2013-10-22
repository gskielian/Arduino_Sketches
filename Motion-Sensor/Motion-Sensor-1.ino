//Create a place to store the PIR sensor value




//value will be 
//"1" when high 
// or
//"0" when low

int sensorValue=0;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println("Hello Serial");
  Serial.println("sensorValue");  
  delay(10);

}
