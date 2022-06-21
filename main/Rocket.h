#ifndef Rocket_h
#define Rocket_h
#include "Arduino.h"
#include "LED.h"
#include "Stepper.h"


//const static int MAX_STEPS = -1;
// int MOTOR_PINS_[] = { -1, -1, -1, -1};
//int LED_PINS[] = { -1, -1};

//Stepper rocket_motor(MAX_STEPS, MOTOR_PINS_[0], MOTOR_PINS_[1], MOTOR_PINS_[2], MOTOR_PINS_[3]);
class Rocket {
    public:
   

    const static int NUM_LEDS = 2;
    const int POTENTIOMETER_PIN = -1;
    LED LEDs[NUM_LEDS];
    const int POTENTIOMETER_MIN = -1;
    const int MIN_ROCKET_POS = 0;
    const float NUM_ROTATIONS_TO_GET_TO_HIGH_POINT = 3;
    const int STEPS_PER_REVOLUTION = 32;
    const int MAX_ROCKET_POS = NUM_ROTATIONS_TO_GET_TO_HIGH_POINT * STEPS_PER_REVOLUTION;
    const int POTENTIOMETER_MAX = -1;
  
    const int pos = -1;
    
    
    
    Rocket();

     void setSpeed(int n);

    int lastPotPos = POTENTIOMETER_MIN;


    void updateRocket();

    void setLEDsBrightness (int brightness);
    void turnOff();
     int LED_PINS[2];
     int MOTOR_PINS_[4];
};
#endif
