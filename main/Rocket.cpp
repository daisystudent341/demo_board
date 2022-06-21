#include "Rocket.h"
#include "Arduino.h"

Stepper rocket_motor(-1, -1, -1, -1, -1);

Rocket::Rocket() {

      for (int i = 0; i < NUM_LEDS; i++) {
        LED tempv(LED_PINS[i]);
        LEDs[i] = tempv;
      }

     LED_PINS[0] = -1;
     LED_PINS[1] = -1;
     MOTOR_PINS_[0] = -1;
     MOTOR_PINS_[1] = -1;
     MOTOR_PINS_[2] = -1;
     MOTOR_PINS_[3] = -1;
    
}

void Rocket::setSpeed(int n) {
      rocket_motor.setSpeed(n);
}


void Rocket::updateRocket() {
      int data = analogRead(POTENTIOMETER_PIN);

      int perc = map(data, POTENTIOMETER_MIN, POTENTIOMETER_MAX, 0, 255);
      setLEDsBrightness(perc);

      data -= lastPotPos;
      int abs_data = abs(data);
      int sign;

      if (data < 0) sign = -1;
      else {
        sign = 1;
      }

      int numSteps = map(abs_data, POTENTIOMETER_MIN, POTENTIOMETER_MAX, MIN_ROCKET_POS, MAX_ROCKET_POS);


      rocket_motor.step(sign * numSteps);

      lastPotPos = data;
}

 void Rocket::setLEDsBrightness (int brightness) {
      for (int i = 0; i < NUM_LEDS; i++) {
        LEDs[i].setBrightness(brightness);
      }
 }


 void Rocket::turnOff() {
      for (int i = 0; i < NUM_LEDS; i++) {
        LEDs[i].turnOffLED();
      }
}
