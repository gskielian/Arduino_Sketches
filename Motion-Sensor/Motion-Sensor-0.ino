//Adding Serial Interface

//Serial connection between the Microcontroller (MCU) and the computer
//Computers can talk to eachother using a SERIAL CONNECTION. In this case there is a Transmit wire (TX), and a Receive Wire (RX)

void setup() {

  Serial.begin(9600);  // 9600 is the number of signals per second, the two devices need to be at the same speed to communicate

}

void loop() {
  Serial.println("Hello from the Arduino!");

  delay(10);
}
