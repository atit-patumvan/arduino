const int buttonPin = 2; // Pin where the switch is connected

void setup() {
  Serial.begin(9600); // Start the Serial communication
  pinMode(buttonPin, INPUT); // Set the switch pin as an input
}

void loop() {
  int buttonState = digitalRead(buttonPin); // Read the switch state
  Serial.println(buttonState); // Print the switch state to the Serial Monitor
  delay(500); // Wait for half a second
}