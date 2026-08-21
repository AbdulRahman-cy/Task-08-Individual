#ifndef L298N_H
#define L298N_H
#endif

#include <Arduino.h>
#include <MotorDriver.h>

class L298N : public MotorDriver {
    
public:
    L298N(int in1Pin, int in2Pin, int enablePin);
    void init() override;
    void drive(int speed) override;

private:
    int _in1Pin;
    int _in2Pin;
    int _enablePin;
};