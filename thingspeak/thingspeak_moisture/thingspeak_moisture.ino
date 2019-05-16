//-------------------------------------------------------HECTOMINDS--------------------------------------------------//
//-----------------------------------------SENDING MOISTURE DATA TO THINGSPEAK---------------------------------------//
//----------------------------------------------Copyright © 2019 by Hectominds---------------------------------------//


#include <ESP8266WiFi.h>;

#include <WiFiClient.h>;

#include <ThingSpeak.h>;

const char* ssid = "network"; //Your Network SSID

const char* password = ""; //Your Network Password

int moisture;

int moisture_pin= A0; //LDR Pin Connected at A0 Pin



WiFiClient client;

unsigned long myChannelNumber =773102; //Your Channel Number (Without Brackets)

const char * myWriteAPIKey = "QC77Y0JMMI7XN75W"; //Your Write API Key

const int  fieldNumber=6;  // type your field number

void setup()

{

Serial.begin(9600);

delay(10);

// Connect to WiFi network

WiFi.begin(ssid, password);


Serial.println(WiFi.localIP());

ThingSpeak.begin(client);

}



void loop()

{

moisture = analogRead(A0); //Read Analog values and Store in variable

moisture=map(moisture,50,0,0,100); // resistance is less more value and conveted into percentages 0 to 100

ThingSpeak.writeField(myChannelNumber,fieldNumber,moisture, myWriteAPIKey); //Update in ThingSpeak


delay(10000);
Serial.println(moisture); //Print on Serial Monitor

}
