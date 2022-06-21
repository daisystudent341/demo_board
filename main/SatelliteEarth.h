#ifndef SatelliteEarth_h
#define SatelliteEarth_h
#include "SatelliteEarth.h"

class SatelliteEarth {
    public:
    const int SWITCH_PIN = -1;
    const int SPEED = 200; // 0 - 255
    const int A_ENABLE_PIN = -1;
    int IN_PINS[2];

    SatelliteEarth();

    void updateSatelliteEarth();

    bool isSwitchPressed();

    void setSpeed(int n);


};
#endif
