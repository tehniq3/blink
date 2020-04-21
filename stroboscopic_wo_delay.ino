/*
 * original program wrote by Nicu FLORICA (niq_ro) - http://nicuflorica.blogspot.com/
 */

#define led1 6    // led +  220..470 ohmi resistor to GND
#define led2 7    // led +  220..470 ohmi resistor to GND

void setup() {
  pinMode(led1,OUTPUT);   // pin as output
  pinMode(led2,OUTPUT);   // pin as output 
  digitalWrite(led1, LOW);  // led1 OFF
  digitalWrite(led2, LOW);  // led2 OFF
}

void loop() {
  int stare = millis()/75;
  
if ((stare%8 == 1) or (stare%8 == 3))
 {
  digitalWrite(led1, HIGH);  // led1 on 
 }
else
if ((stare%8 == 5) or (stare%8 == 7))
 {
  digitalWrite(led2, HIGH);  // led2 on  
 }
else
{
  digitalWrite(led1, LOW);  // led1 OFF
  digitalWrite(led2, LOW);  // led2 OFF             
}
} // sfarsit program
