// Prevent including the file more than once
#ifndef Cytron_H
#define Cytron_H
#endif

#include "MotorDriver.h"
#include "Arduino.h"

class Cytron : public MotorDriver {

public: 
        Cytron(int DIR, int PWM);
        void init() override;
        void drive(int speed) override;

private:
        int _DIR;
        int _PWM;
}