//-------------------------------------------------------HECTOMINDS--------------------------------------------------//
//-------------------------------------------------INTERFACING RELAY MODULE------------------------------------------//
//----------------------------------------------Copyright © 2019 by Hectominds---------------------------------------//

int relay = D0;    // declaring pin DO as relay pin

void setup() {
  pinMode (relay , OUTPUT);  
  Serial.begin(9600);}
  
void loop() {
  digitalWrite (relay ,HIGH);
  Serial.println ("relay is turned ON");
  delay (1000);
  digitalWrite(relay,LOW);
  Serial.println ("relay is turned OFF");
  delay(1000);
   }
    
