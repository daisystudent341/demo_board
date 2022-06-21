#include "LED.h"
#include "Arduino.h"

LED::LED(int pin) {
      LED_PIN = pin;
      pinMode(LED_PIN, OUTPUT);
 }
LED::LED() {}
 void LED::turnOffLED() {
      analogWrite(LED_PIN, LOW);
 }
 void LED::setBrightness(int brightness) {
      analogWrite(LED_PIN, brightness);
 }

 void LED::setPin(int pin) {
  LED_PIN = pin;
 }

    
