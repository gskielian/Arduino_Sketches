//We can print values

int someValue=35;

void setup() {

  Serial.begin(9600);

}

void loop() {

  Serial.println("Hello Serial");
  Serial.println(someValue);  
  delay(10);

}
