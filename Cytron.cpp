// Include the necessary header files
#include "Cytron.h"


// Constructor
Cytron::Cytron(int DIR, int PWM) {
    _DIR = DIR;
    _PWM = PWM;
}

// Initialize the pins for the Motor-Driver
void Cytron::init() {
    pinMode(_DIR, OUTPUT);
    pinMode(_PWM, OUTPUT);
}


void Cytron::drive(int speed) {
    // Set Direction to HIGH for forward
    if (speed > 0) {
        digitalWrite(_DIR, HIGH);
    }

    // Otherwise, set Direction to LOW for backward as if it was 0, it wont move, direction does not matter
    else {
        digitalWrite(_DIR, LOW);
    }

    // Write the speed to the PWM pin
    analogWrite(_PWM, abs(speed))
}