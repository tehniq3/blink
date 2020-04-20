/*
 * original program wrote by Nicu FLORICA (niq_ro) - http://nicuflorica.blogspot.com/
 */

#define led 6    // led + rezistenta 220..470 ohmi la masa

void setup() {
  pinMode(led,OUTPUT);//
  digitalWrite(led, LOW);  // led stins
}

void loop() {
  int stare = millis()/1000;
  digitalWrite(led, stare%2);  // led aprins            
} // sfarsit program
