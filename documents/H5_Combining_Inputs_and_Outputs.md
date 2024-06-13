
# Combining Inputs and Outputs

## Project Setup and Planning
In this section, you will learn how to combine input from sensors and control outputs. We will use a potentiometer to control a servo motor.

### Components Needed:
- 1 x Potentiometer
- 1 x Servo motor
- Jumper wires

### Circuit Setup:
1. Connect the middle pin of the potentiometer to an analog pin (e.g., A0) on the Arduino.
2. Connect the other two pins of the potentiometer to 5V and GND.
3. Connect the servo motor:
   - Red wire to 5V
   - Brown/Black wire to GND
   - Yellow/White wire to a digital pin with PWM (e.g., pin 9).

## Introduction to Servo Motors
Servo motors are used for precise control of angular position. They consist of a motor and a feedback mechanism to control the position.

### Code Example:
1. Use the following code to control the position of a servo motor based on the potentiometer input:

```c
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
```

### Explanation:
- **Servo.h:** Include the Servo library.
- **Servo myservo;**: Create a servo object.
- **myservo.attach(9);**: Attach the servo to pin 9.
- **analogRead(potPin);**: Read the potentiometer value.
- **map(potValue, 0, 1023, 0, 180);**: Map the potentiometer value to an angle between 0 and 180 degrees.
- **myservo.write(angle);**: Set the servo to the specified angle.

## Hands-on Project: Potentiometer-Controlled Servo Motor
This project will help you understand how to control a servo motor using a potentiometer.

### Components Needed:
- 1 x Potentiometer
- 1 x Servo motor
- Jumper wires

### Circuit Setup:
1. Connect the middle pin of the potentiometer to an analog pin (e.g., A0) on the Arduino.
2. Connect the other two pins of the potentiometer to 5V and GND.
3. Connect the servo motor:
   - Red wire to 5V
   - Brown/Black wire to GND
   - Yellow/White wire to a digital pin with PWM (e.g., pin 9).

### Code:
```c
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
```
Upload the code to the Arduino board. Rotate the potentiometer knob and observe how the servo motor's position changes.

This hands-on project will help you understand how to combine inputs and outputs using Arduino.
