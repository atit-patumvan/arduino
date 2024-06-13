
# Basic Control Techniques

## Controlling an LED with digitalWrite()
In this section, you will learn how to control an LED using the `digitalWrite()` function. This function allows you to set a digital pin to HIGH (on) or LOW (off).

### Code Example:
1. Connect an LED to a digital pin (e.g., pin 13) on the Arduino.
2. Use the following code to blink the LED:

```c
void setup() {
  pinMode(13, OUTPUT); // Set pin 13 as an output
}

void loop() {
  digitalWrite(13, HIGH); // Turn the LED on
  delay(1000); // Wait for a second
  digitalWrite(13, LOW); // Turn the LED off
  delay(1000); // Wait for a second
}
```

## Reading a Switch State with digitalRead()
This section teaches you how to read the state of a switch (or button) using the `digitalRead()` function. This function reads the value from a specified digital pin, which will be either HIGH or LOW.

### Code Example:
1. Connect a switch to a digital pin (e.g., pin 2) and to GND, with a pull-down resistor (10kΩ) between the pin and GND.
2. Use the following code to read the switch state and control an LED:

```c
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
```

## Using Serial Monitor for Debugging
The Serial Monitor is a useful tool in the Arduino IDE that allows you to send and receive data from the Arduino. This section explains how to use the Serial Monitor for debugging.

### Code Example:
1. Open the Serial Monitor in the Arduino IDE.
2. Use the following code to print the state of the switch to the Serial Monitor:

```c
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
```

## Hands-on Activity: LED Control with a Switch
This activity will help you understand how to control an LED using a switch and read the switch state using `digitalRead()`.

### Components Needed:
- 1 x LED
- 1 x Resistor (220Ω)
- 1 x Switch
- 1 x Resistor (10kΩ for pull-down)
- Jumper wires

### Circuit Setup:
1. Connect one leg of the switch to 5V on the breadboard.
2. Connect the other leg of the switch to a digital pin (e.g., pin 2) on the Arduino.
3. Connect a resistor (10kΩ) between the digital pin and GND to act as a pull-down resistor.
4. Connect the LED and resistor as explained above.

### Code:
```c
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
```
Upload the code to the Arduino board. Press the switch to turn the LED on and off. This hands-on activity will help you understand how to use Arduino to read inputs and control outputs.

