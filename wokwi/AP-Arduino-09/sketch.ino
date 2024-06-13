const int potPin = A0; // Pin where the potentiometer is connected

void setup() {
  Serial.begin(9600); // Start the Serial communication
}

void loop() {
  int potValue = analogRead(potPin); // Read the potentiometer value
  Serial.println(potValue); // Print the value to the Serial Monitor
  delay(500); // Wait for half a second
}