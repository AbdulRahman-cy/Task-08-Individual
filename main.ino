#include "Cytron.h"


const int DIR = PB14; // GPIO
const int PWM = PA1; // Supports PWM

Cytron Cytron_driver(DIR, PWM);

void setup() {

    // Initialize Cytron motor driver
    Cytron_driver.init()

}

void loop() {

    // Test it with positive velocity
    Cytron_driver.drive(10);

    // Test it with negative velocity
    Cytron_driver.drive(-10);

    // Test with 0 velocity
    Cytron_driver.drive(0);

}