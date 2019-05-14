//-------------------------------------------------------HECTOMINDS--------------------------------------------------//
//---------------------------------------------INTERFACING PUSH BUTTON AND LED ----------------------------------------//
//----------------------------------------------Copyright © 2019 by Hectominds---------------------------------------//



int pushbutton = D1; // declaring pin 2 as pushbuttonpin
int LED=D0;
void setup() {
  pinMode (pushbutton ,INPUT); // making pushbutton pin as input 
  Serial.begin(9600); // setting serial monitor at 9600 baud rate
  pinMode(LED,OUTPUT);
  
  
}

void loop() {
 if ( digitalRead(pushbutton)==HIGH){ //if button is pressed
    Serial.println ("button is pressed");// prints  button is pressed
    digitalWrite(LED,HIGH);
 }else {
    Serial.println ("button is not pressed"); // prints  button is not pressed
    digitalWrite(LED,LOW);
  }   
}
