

int someValue=35;



void setup() {

  Serial.begin(9600);
  
  pinMode(9,INPUT);
}

void loop() {

  someValue = digitalRead(9);
  Serial.println("Hello Serial");
  Serial.println(someValue);  
  delay(10);

}
