//-------------------------------------------------------HECTOMINDS--------------------------------------------------//
//-----------------------------------------------------moisture sensor----------------------------------------------//
//----------------------------------------------Copyright © 2019 by Hectominds---------------------------------------//

int moisture_pin= A0; // declaring moisture pin A0 as input
int moisture; // variable is used for store the output.
void setup() {
Serial.begin(9600); // serial transmission at 9600 baud rate
}
void loop() {
moisture= analogRead(moisture_pin); // analog read of sensor
moisture=map(moisture,0,1024,100,0); // map readings into percentages
Serial.println(moisture);
}
