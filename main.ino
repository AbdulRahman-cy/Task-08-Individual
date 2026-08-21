#include "L298N.h"
#include "Cytron.h"
#include "BTS.h"

const int IN1 = PB12; // GPIO
const int IN2 = PB13; // GPIO
const int ENA = PA0; // Supports PWM

const int DIR = PB14; // GPIO
const int PWM = PA1; // Supports PWM

const int RPWM = PA2;
const int LPWM = PA3;

L298N L298N_driver(IN1, IN2, ENA);
Cytron Cytron_driver(DIR, PWM);
BTS BTS_driver(RPWM, LPWM);


void setup() {

    // Initialize L298N motor driver
    L298N_driver.init()

    // Initialize Cytron motor driver
    Cytron_driver.init()

    // Initialize BTS motor driver
    BTS_driver.init()


}

void loop() {

    // Test it with positive velocity
    L298N_driver.drive(10);
    delay(1000);
    // Test it with negative velocity
    L298N_driver.drive(-10);
    delay(1000);
    // Test with 0 velocity
    L298N_driver.drive(0);
    delay(1000);
    Cytron_driver.drive(10);
    delay(1000);
    // Test it with negative velocity
    Cytron_driver.drive(-10);
    delay(1000);
    // Test with 0 velocity
    Cytron_driver.drive(0);
    delay(1000);
    // Test with positive
    BTS_driver.drive(10);
    delay(1000);
    // Test with negative
    BTS_driver.drive(-10);
    delay(1000);
    // Test with 0
    BTS_driver.drive(0);
    delay(1000);
}