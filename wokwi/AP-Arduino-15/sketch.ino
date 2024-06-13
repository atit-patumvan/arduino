#include <Servo.h>

Servo myservo;  // Create servo object to control a servo
const int potPin = A0; // Analog pin connected to the potentiometer
int potValue = 0; // Variable to store the value from the potentiometer

void setup() {
  myservo.attach(9); // Attach the servo on pin 9 to the servo object
}

void loop() {
  potValue = analogRead(potPin); // Read the value of the potentiometer (value between 0 and 1023)
  int angle = map(potValue, 0, 1023, 0, 180); // Map the potentiometer value to an angle between 0 and 180
  myservo.write(angle); // Set the servo position according to the scaled value
  delay(15); // Wait for the servo to reach the position
}