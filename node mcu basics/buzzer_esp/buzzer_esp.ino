int buzzer=2;

void setup() {
  pinMode(buzzer, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(buzzer, HIGH);   // Turn the buzzer on 
  delay(100);                      // Wait for a second
  digitalWrite(LED_BUILTIN, LOW);  // Turn the BUZZER off
  delay(200);                      // Wait for two seconds (to demonstrate the active low LED)
}
