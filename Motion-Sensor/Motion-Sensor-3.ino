//Create an alarm here using what you have learned so far (code from previous example included for convenience)


int someValue=35;



void setup() {

  Serial.begin(9600);
  
  pinMode(9,INPUT);

  //Hint: here you'll need to make some pin an OUTPUT
}

void loop() {

  someValue = digitalRead(9);
  Serial.println("Hello Serial");
  Serial.println(someValue);  
  
  //Hint: You'll need to place an if-else statement around here
  
  delay(10);

}
