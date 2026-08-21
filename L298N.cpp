// Include the header file for the L298N class
#include "L298N.h"
#include <Arduino.h>

// Constructor to initialize
L298N::L298N(int IN1, int IN2, int ENA) {
    _IN1 = IN1;
    _IN2 = IN2;
    _ENA = ENA;
}

// Initialize the pins for the L298N motor driver
void L298N::init() {
    pinMode(_IN1, OUTPUT);
    pinMode(_IN2, OUTPUT);
    pinMode(_ENA, OUTPUT);
}

// Drive the motor in the right direction
void L298N::drive(int speed) {

    if (speed > 0) {
        digitalWrite(_IN1, HIGH);
        digitalWrite(_IN2, LOW);
    } 
    else if (speed < 0) {
        digitalWrite(_IN1, LOW);
        digitalWrite(_IN2, HIGH);
    } 
    else {
        digitalWrite(_IN1, LOW);
        digitalWrite(_IN2, LOW);
    }

    // Set the speed of the motor using PWM, abs(speed) is used so that it is not negative
    analogWrite(_ENA, abs(speed));
}