//-------------------------------------------------------HECTOMINDS--------------------------------------------------//
//----------------------------------------------CONTROLLING  RELAY MODULE WITH SWITCH--------------------------------//
//----------------------------------------------Copyright © 2019 by Hectominds---------------------------------------//

int pushbutton = D2; // declaring pin D2 as pushbutton pin
int relay = D0;    // declaring pin D0 as relay pin
void setup() {
  pinMode (pushbutton ,INPUT_PULLUP); // making pushbutton pin as input 
  pinMode (relay , OUTPUT); 
  Serial.begin(9600);}
  
void loop() {
  if (digitalRead(pushbutton) == HIGH) { //  
    digitalWrite(relay,HIGH);
    Serial.println ("relay is turned ON");}
    else {
    digitalWrite(relay,LOW);
    Serial.println ("relay is turned OFF");}   
    }
    
