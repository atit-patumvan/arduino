
# Getting Started with Arduino

## What is Arduino?
Arduino is an open-source electronics platform based on easy-to-use hardware and software. It's intended for anyone making interactive projects. Arduino boards are able to read inputs - light on a sensor, a finger on a button, or a Twitter message - and turn it into an output - activating a motor, turning on an LED, or publishing something online.

## Types of Arduino Boards
There are various types of Arduino boards available, each with different specifications. Some of the common boards include:
- **Arduino Uno:** The most popular board, great for beginners.
- **Arduino Nano:** A small, breadboard-friendly version.
- **Arduino Mega:** A larger board with more input/output pins for complex projects.

## Key Components
- **Microcontroller:** The brain of the board, typically an ATmega328P on the Arduino Uno.
- **Power Supply:** Can be powered via USB or an external power supply.
- **Input/Output Pins:** Digital and analog pins used to connect sensors, LEDs, and other components.

## Installing the Arduino IDE
The Arduino Integrated Development Environment (IDE) is used to write and upload programs to the Arduino board.
1. Download the Arduino IDE from the official [Arduino website](https://www.arduino.cc/en/software).
2. Install the IDE on your computer by following the instructions for your operating system.

## Connecting the Arduino Board to a Computer
1. Use a USB cable to connect the Arduino board to your computer.
2. Open the Arduino IDE.
3. Select the correct board and port from the "Tools" menu.

## First Program: Blinking an LED
1. Open the Arduino IDE.
2. Copy and paste the following code into the IDE:

```c
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn the LED on
  delay(1000); // Wait for a second
  digitalWrite(LED_BUILTIN, LOW); // Turn the LED off
  delay(1000); // Wait for a second
}
```
3. Click the upload button to upload the code to the board.
4. The built-in LED on the board should start blinking.

## Breadboard Basics
A breadboard is a construction base for prototyping of electronics.
- **Powering the Breadboard from the Arduino:**
  - Connect the 5V pin from the Arduino to the positive power rail on the breadboard.
  - Connect the GND pin from the Arduino to the negative power rail on the breadboard.

- **Wiring an LED and Resistor:**
  - Place the LED on the breadboard.
  - Connect a resistor in series with the LED to limit the current.
  - Connect the anode (longer leg) of the LED to a digital pin on the Arduino.
  - Connect the cathode (shorter leg) of the LED to the GND rail on the breadboard.

## Hands-on Activity: Wiring and Controlling an LED with a Switch
1. **Components Needed:**
   - 1 x LED
   - 1 x Resistor (220Ω)
   - 1 x Pushbutton switch
   - Jumper wires

2. **Circuit Setup:**
   - Connect one leg of the switch to 5V on the breadboard.
   - Connect the other leg of the switch to a digital pin (e.g., pin 2) on the Arduino.
   - Connect a resistor (10kΩ) between the digital pin and GND to act as a pull-down resistor.
   - Connect the LED and resistor as explained above.

3. **Code:**

```c
const int buttonPin = 2;
const int ledPin = 13;

int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
```
4. Upload the code to the Arduino board.
5. Press the switch to turn the LED on and off.

This hands-on activity will help you understand how to use Arduino to read inputs and control outputs.
