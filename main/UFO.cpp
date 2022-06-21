#include "UFO.h"
#include "Arduino.h"

void UFO::updateUFO() {
     led.setPin(LED_PIN);
      if (readMic() > THRESH) {
        led.setBrightness(255);
      }
}


int UFO::readMic() {
      return analogRead(MIC_PIN);
}
