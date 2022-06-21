#ifndef Constellation_h
#define Constellation_h
#include "Arduino.h"
#include "LED.h"

class Constellation {
  public:
    LED LEDs[10];
    int BUTTON_PIN;
    int NUM_LEDS;
    Constellation(int LEDPinsArr[], int numLEDs, int buttonPIN);

    void updateConstellation();

    void turnLEDsOn();

    void turnLEDsOff();

};






#endif
