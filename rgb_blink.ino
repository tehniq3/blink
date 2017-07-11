/*
  Blinkin RGB led ...
  Turns on an LED on for one second, then off for one second, repeatedly.
  This example code is in the public domain.
changed sketch by Nicu FLORICA (aka niq_ro) from http://www.tehnic.go.ro
http://nicuflorica.blogspot.ro/
http://arduinotehniq.blogspot.com/
& http://www.arduinotehniq.com/
 */

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(9, OUTPUT);  
  pinMode(10, OUTPUT);    
  pinMode(11, OUTPUT); 
  digitalWrite(9, LOW);  // led1 is off
  digitalWrite(10,LOW) ;  // led2 is off
  digitalWrite(11, LOW);  // led3 is off    
}

// the loop routine runs over and over again forever:
void loop() {

for (byte led = 9; led < 12; led++)
{ 
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a 1/10 from a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(100);               // wait for a 1/10 from a second
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a 1/10 from second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);    
}
} // end main loop
