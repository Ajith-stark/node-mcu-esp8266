>

#include <ESP8266WiFi.h>;

#include <WiFiClient.h>;

#include <ThingSpeak.h>;

const char* ssid = "network"; //Your Network SSID

const char* password = ""; //Your Network Password

int val;

int LDRpin = A0; //LDR Pin Connected at A0 Pin



WiFiClient client;

unsigned long myChannelNumber =773102; //Your Channel Number (Without Brackets)

const char * myWriteAPIKey = "QC77Y0JMMI7XN75W"; //Your Write API Key

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

val = analogRead(LDRpin); //Read Analog values and Store in val variable

ThingSpeak.writeField(myChannelNumber, 2,val, myWriteAPIKey); //Update in ThingSpeak

delay(10000);
Serial.println(val); //Print on Serial Monitor

}
