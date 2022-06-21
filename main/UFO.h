#ifndef UFO_h
#define UFO_h
#include "Arduino.h"
#include "LED.h"


class UFO {
  public:
    const int MIC_PIN = -1;
    const static int LED_PIN = -1;
    const int THRESH = 600;
    LED led;

    void updateUFO();

    int readMic();
};

#endif
