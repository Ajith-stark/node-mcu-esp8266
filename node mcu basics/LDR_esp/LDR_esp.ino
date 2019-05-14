//-------------------------------------------------------HECTOMINDS--------------------------------------------------//
//-------------------------------------------------INTERFACING LDR------------------------------------------//
//----------------------------------------------Copyright © 2019 by Hectominds---------------------------------------//


int LDR= A0;  // declaring LDR PIN
int val;  // for storing analog values
void setup() {
  Serial.begin(9600);
  pinMode (LDR,INPUT);  

}

void loop() {
  val= analogRead(LDR); // analog reading ldr sensor 
  Serial.println(val);
  delay(250);
  

}
