#include <IRremote.h>

#define PIN_RECEIVER 2   // Signal Pin of IR receiver

IRrecv receiver(PIN_RECEIVER);


void setup()
{
  Serial.begin(9600);
  receiver.enableIRIn(); // Start the receiver
}

void loop()
{
  // Checks received an IR signal
  if (receiver.decode()) {
    translateIR();
    receiver.resume();  // Receive the next value
  }
}

void translateIR()
{
  // Takes command based on IR code received
      Serial.println(receiver.decodedIRData.command);
}