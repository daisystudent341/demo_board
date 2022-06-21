#include "Constellation.h"
#include "Arduino.h"

Constellation::Constellation(int LEDPinsArr[], int numLEDs, int buttonPIN) {
      for (int i = 0; i < numLEDs; i++) {
        int t = LEDPinsArr[i];
        LED temp(t);
        LEDs[i] = temp;
      }
      BUTTON_PIN = buttonPIN;
      NUM_LEDS = numLEDs;
      pinMode(BUTTON_PIN, INPUT);
}


void Constellation::updateConstellation() {
      if (digitalRead(BUTTON_PIN) == HIGH) {
        turnLEDsOn();
      }
      else {
        turnLEDsOff();
      }
}


void Constellation::turnLEDsOn() {
      for (int i = 0; i < NUM_LEDS; i++) {
        LEDs[i].setBrightness(255);
      }
}


void Constellation::turnLEDsOff () {
      for (int i = 0; i < NUM_LEDS; i++) {
        LEDs[i].turnOffLED();
      }
}
