
# Introduction to Analog Sensing

## Analog vs. Digital Sensors
Sensors can be categorized into two types: analog and digital.

- **Analog Sensors:** Produce a continuous signal that represents the quantity being measured (e.g., temperature, light). The output can have any value within a given range.
- **Digital Sensors:** Produce a discrete signal, usually a binary signal, representing the quantity being measured (e.g., on/off, 1/0).

## Reading Sensor Data with analogRead()
The `analogRead()` function reads the value from an analog pin, which can range from 0 to 1023. This value represents the voltage applied to the pin.

### Code Example:
1. Connect a potentiometer to an analog pin (e.g., A0) on the Arduino.
2. Use the following code to read the potentiometer value and print it to the Serial Monitor:

```c
const int potPin = A0; // Pin where the potentiometer is connected

void setup() {
  Serial.begin(9600); // Start the Serial communication
}

void loop() {
  int potValue = analogRead(potPin); // Read the potentiometer value
  Serial.println(potValue); // Print the value to the Serial Monitor
  delay(500); // Wait for half a second
}
```

## Hands-on Activity: Reading Data from a Potentiometer
This activity will help you understand how to read data from an analog sensor (potentiometer) using the `analogRead()` function.

### Components Needed:
- 1 x Potentiometer
- Jumper wires

### Circuit Setup:
1. Connect the middle pin of the potentiometer to an analog pin (e.g., A0) on the Arduino.
2. Connect the other two pins to 5V and GND on the breadboard.

### Code:
```c
const int potPin = A0; // Pin where the potentiometer is connected

void setup() {
  Serial.begin(9600); // Start the Serial communication
}

void loop() {
  int potValue = analogRead(potPin); // Read the potentiometer value
  Serial.println(potValue); // Print the value to the Serial Monitor
  delay(500); // Wait for half a second
}
```
Upload the code to the Arduino board. Rotate the potentiometer knob and observe the values in the Serial Monitor.

## Using a Photoresistor to Measure Light
A photoresistor (light-dependent resistor, LDR) changes its resistance based on the amount of light falling on it. The resistance decreases with increasing light intensity.

### Hands-on Activity: Light-Sensitive Control with a Relay
This activity demonstrates how to control a relay based on the light intensity measured by a photoresistor.

### Components Needed:
- 1 x Photoresistor (LDR)
- 1 x Resistor (10kΩ)
- 1 x Relay module
- Jumper wires

### Circuit Setup:
1. Connect one leg of the photoresistor to 5V on the breadboard.
2. Connect the other leg to an analog pin (e.g., A0) on the Arduino and to GND through a 10kΩ resistor.
3. Connect the control pin of the relay module to a digital pin (e.g., pin 8) on the Arduino.

### Code:
```c
const int ldrPin = A0; // Pin where the photoresistor is connected
const int relayPin = 8; // Pin where the relay is connected

void setup() {
  pinMode(relayPin, OUTPUT); // Set the relay pin as an output
  Serial.begin(9600); // Start the Serial communication
}

void loop() {
  int ldrValue = analogRead(ldrPin); // Read the photoresistor value
  Serial.println(ldrValue); // Print the value to the Serial Monitor

  if (ldrValue < 500) { // Adjust threshold as needed
    digitalWrite(relayPin, HIGH); // Turn the relay on
  } else {
    digitalWrite(relayPin, LOW); // Turn the relay off
  }

  delay(500); // Wait for half a second
}
```
Upload the code to the Arduino board. Adjust the light falling on the photoresistor to control the relay.

This hands-on activity will help you understand how to use Arduino to read analog inputs and control outputs based on sensor data.
