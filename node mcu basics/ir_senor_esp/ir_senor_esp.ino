//-------------------------------------------------------HECTOMINDS--------------------------------------------------//
//--------------------------------------------distance measurement using ir sensor------------------------------------//
//----------------------------------------------Copyright © 2019 by Hectominds---------------------------------------//

int ir_sensor = A0;       // analog pin is used for input of sensor
int val;           // variable to store the values from sensor(initially zero)
void setup() {
  Serial.begin(9600);               // starts the serial monitor
} 
void loop()   {
  val = analogRead(ir_sensor);       // reads the value of the sharp sensor
  Serial.println(val);   // prints the value of the sensor to the serial monitor
}
