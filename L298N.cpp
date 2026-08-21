#include "L298N.h"

L298N::L298N(int in1Pin, int in2Pin, int enablePin) {
    _in1Pin = in1Pin;
    _in2Pin = in2Pin;
    _enablePin = enablePin;
}

void L298N::init() {
    pinMode(_in1Pin, OUTPUT);
    pinMode(_in2Pin, OUTPUT);
    pinMode(_enablePin, OUTPUT);
}

void L298N::drive(int speed) {

    if (speed > 0) {
        digitalWrite(_in1Pin, HIGH);
        digitalWrite(_in2Pin, LOW);
    } 
    else if (speed < 0) {
        digitalWrite(_in1Pin, LOW);
        digitalWrite(_in2Pin, HIGH);
    } 
    else {
        digitalWrite(_in1Pin, LOW);
        digitalWrite(_in2Pin, LOW);
    }

    analogWrite(_enablePin, abs(speed));
}