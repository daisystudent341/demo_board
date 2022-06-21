#include <Stepper.h>
#include "LED.h"
#include "Constellation.h"
#include "Rocket.h"
#include "SatelliteEarth.h"
#include "UFO.h"


UFO ufo;
Rocket rocket;
SatelliteEarth satEarth;

// LED Pins
int daisyLEDPins[] = {};
const int daisyButtonPin = -1;
int sz1 = 1;

int bearLEDPins[] = {};
const int bearButtonPin = -1;
int sz2 = 1;

int dogLEDPins[] = {};
const int dogButtonPin = -1;
int sz3 = 1;

int birdLEDPins[] = {};
const int birdButtonPin = -1;
int sz4 = 1;

int gearLEDPins[] = {};
const int gearButtonPin = -1;
int sz5 = 1;


Constellation daisy(daisyLEDPins, sz1, daisyButtonPin);
Constellation bear(bearLEDPins, sz2, bearButtonPin);
Constellation dog(dogLEDPins, sz3, dogButtonPin);
Constellation bird(birdLEDPins, sz4, birdButtonPin);
Constellation gear(gearLEDPins, sz5, gearButtonPin);

void setup() {
  // put your setup code here, to run once:

}



void loop() {
  // put your main code here, to run repeatedly:

  daisy.updateConstellation();
  bear.updateConstellation();
  dog.updateConstellation();
  bird.updateConstellation();
  gear.updateConstellation();
  ufo.updateUFO();
  rocket.updateRocket();
  satEarth.updateSatelliteEarth();

  // delay(100);

}
