#ifndef LED_h
#define LED_h
#include "Arduino.h"
class LED {
    /*
       LEDs that control brightness need to be pins  3, 5, 6, 9, 10, or 11
    */
    public:
    int LED_PIN;
    int state = HIGH;
    LED(int pin);
    LED();
    void setPin(int pin);

    void turnOffLED();
    void setBrightness(int brightness);
};
#endif
