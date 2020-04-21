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
  
if ((stare%10 == 1) or (stare%10 == 3))
 {
  digitalWrite(led1, HIGH);  // led1 on 
 }
else
if ((stare%10 == 6) or (stare%10 == 8))
 {
  digitalWrite(led2, HIGH);  // led2 on  
 }
else
{
  digitalWrite(led1, LOW);  // led1 OFF
  digitalWrite(led2, LOW);  // led2 OFF             
}
} // sfarsit program
