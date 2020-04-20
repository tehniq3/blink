/*
 * original program wrote by Nicu FLORICA (niq_ro) - http://nicuflorica.blogspot.com/
 */

#define led 6    // led + 220..470R to GND

void setup() {
  pinMode(led,OUTPUT);     // pin as output
  digitalWrite(led, LOW);  // led off
}

void loop() {
  int stare = millis()/1000;
if (stare%2 == 1)
 {
  digitalWrite(led, HIGH);  // led ON  
 }
else
 {
  digitalWrite(led, LOW);  // led OFF
 }
           
} // end main loop
