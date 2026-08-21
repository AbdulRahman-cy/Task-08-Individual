// Include necessary header files
#include "BTS.h"

// Constructor
BTS::BTS(int RPWM, int LPWM) {
    _RPWM = RPWM;
    _LPWM = LPWM;
}

void BTS::init() {
    pinMode(_RPWM, OUTPUT);
    pinMode(_LPWM, OUTPUT);
}

void BTS::drive(int speed) {
    if (speed > 0) {
        analogWrite(_RPWM, abs(speed));
        analogWrite(_LPWM, 0);
    }
    else if (speed < 0) {
        analogWrite(_RPWM = 0);
        analogWrite(_LPWM = abs(speed));
    }
    else {
        analogWrite(_RPWM = 0);
        analogWrite(_LPWM = 0);  
    }
}