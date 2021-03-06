/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

void setup() {                
  // initialize the digital pin as an output.
  // Pin 14 has an LED connected on most Arduino boards:
  pinMode(RED_LED, OUTPUT);     
  pinMode(GREEN_LED, OUTPUT);  
}

void loop() {
  digitalWrite(RED_LED, 128);   // set the LED on
  delay(250);              // wait for a second
  digitalWrite(RED_LED, LOW);    // set the LED off
  digitalWrite(GREEN_LED, 128);    // set the LED off
  delay(250);              // wait for a second
  digitalWrite(GREEN_LED, LOW);    // set the LED off
}
