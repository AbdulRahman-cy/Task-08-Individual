#include "BTS.h"

int RPWM = PA2;
int LPWM = PA3;

BTS BTS_driver(RPWM, LPWM);

void setup() {
    BTS_driver.init();
}

void loop() {
    BTS_driver.drive(10);

    BTS_driver.drive(-10);

    BTS_driver.drive(0);
}