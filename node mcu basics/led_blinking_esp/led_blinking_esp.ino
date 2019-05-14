void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(D0, OUTPUT); 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED on (Note that LOW is the voltage level
  digitalWrite(D0, LOW);
  // but actually the LED is on; this is because
  // it is active low on the ESP-01)
  delay(100);                      // Wait for a second
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED off by making the voltage HIGH
  digitalWrite(D0, HIGH);
  delay(200);                      // Wait for two seconds (to demonstrate the active low LED)
}
