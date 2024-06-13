const int buttonPin = 2; // Pin where the switch is connected
const int ledPin = 13; // Pin where the LED is connected

int buttonState = 0; // Variable to store the switch state

void setup() {
  pinMode(buttonPin, INPUT); // Set the switch pin as an input
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read the switch state

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn the LED on
  } else {
    digitalWrite(ledPin, LOW); // Turn the LED off
  }
}