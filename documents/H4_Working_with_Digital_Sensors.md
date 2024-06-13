
# Working with Digital Sensors

## Using Arduino Libraries
Libraries in Arduino simplify the process of interfacing with sensors and other components. They provide pre-written code for common tasks, making it easier to integrate sensors into your projects.

### Installing a Library:
1. Open the Arduino IDE.
2. Go to "Sketch" > "Include Library" > "Manage Libraries..."
3. In the Library Manager, search for the desired library (e.g., "DHT sensor library").
4. Click "Install" to add the library to your Arduino IDE.

## Interfacing Digital Displays (e.g., LCD 1602 I2C)
LCD displays are useful for showing information from your Arduino projects. The LCD 1602 I2C display is easy to use with fewer wiring connections due to the I2C interface.

### Code Example:
1. Connect the LCD 1602 I2C display to the Arduino.
   - VCC to 5V
   - GND to GND
   - SDA to A4
   - SCL to A5
2. Use the following code to display "Hello, World!" on the LCD:

```c
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hello, world!");
  lcd.setCursor(2,1);
  lcd.print("Arduino");;
}

void loop()
{
}
```

## Interfacing Digital Sensors (e.g., DHT11)
The DHT11 is a digital temperature and humidity sensor. It is easy to interface with Arduino using the DHT sensor library.

### Code Example:
1. Connect the DHT11 sensor to the Arduino.
   - VCC to 5V
   - GND to GND
   - DATA to a digital pin (e.g., pin 2)
2. Install the DHT sensor library as explained above.
3. Use the following code to read and display temperature and humidity data:

```c
#include <DHT.h>

#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %	");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");
}
```

## Hands-on Activity: Reading Temperature and Humidity Data and Displaying it on an LCD 1602 I2C Display
This activity will help you understand how to read data from a digital sensor (DHT11) and display it on an LCD.

### Components Needed:
- 1 x DHT11 sensor
- 1 x LCD 1602 I2C display
- Jumper wires

### Circuit Setup:
1. Connect the DHT11 sensor:
   - VCC to 5V
   - GND to GND
   - DATA to pin 2
2. Connect the LCD 1602 I2C display:
   - VCC to 5V
   - GND to GND
   - SDA to A4
   - SCL to A5

### Code:
```c
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2); // Set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.init();
  lcd.backlight();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    lcd.clear();
    lcd.print("Sensor error!");
    return;
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print(" %");
  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C");

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %	");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");
}
```
Upload the code to the Arduino board. The temperature and humidity readings will be displayed on the LCD and printed to the Serial Monitor.

This hands-on activity will help you understand how to use Arduino to read digital sensor data and display it on an LCD.
