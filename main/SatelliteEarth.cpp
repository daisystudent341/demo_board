#include "SatelliteEarth.h"
#include "Arduino.h"

SatelliteEarth::SatelliteEarth() {
      pinMode(SWITCH_PIN, INPUT);

      pinMode(IN_PINS[0], OUTPUT);
      pinMode(IN_PINS[1], OUTPUT);
      pinMode(A_ENABLE_PIN, OUTPUT);
      setSpeed(SPEED);

      IN_PINS[0] = -1;
      IN_PINS[1] = -1;

}

void SatelliteEarth::updateSatelliteEarth() {
      if (isSwitchPressed()) {
        digitalWrite(IN_PINS[0], HIGH);
        digitalWrite(IN_PINS[1], LOW); // swap pins/high to change dir
      }
}

bool SatelliteEarth::isSwitchPressed() {
      return (digitalRead(SWITCH_PIN) == HIGH);
}

void SatelliteEarth::setSpeed(int n) {
      analogWrite(A_ENABLE_PIN, n);
}
