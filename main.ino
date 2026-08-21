#include "L298N.h"


const int IN1 = PB12; // GPIO
const int IN2 = PB13; // GPIO
const int ENA = PA0; // Supports PWM

L298N L298N_driver(IN1, IN2, ENA);

int speed;

void setup() {

    // Initialize L298N motor driver
    L298N_driver.init()

}

void loop() {

    // Test it with positive velocity
    L298N_driver.drive(10);

    // Test it with negative velocity
    L298N_driver.drive(-10);

    // Test with 0 velocity
    L298N_driver.drive(0);

}