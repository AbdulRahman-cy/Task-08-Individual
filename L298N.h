// If this header file is already included, ignore it.
#ifndef L298N_H
#define L298N_H
#endif

#include <Arduino.h>
#include <MotorDriver.h>

// Define the L298N class which inherits from the MotorDriver class
class L298N : public MotorDriver {

public:

    // Constructor to initialize the L298N with the pins
    L298N(int IN1, int IN2, int ENA);

    // Override the init and drive methods from the MotorDriver class
    void init() override;
    void drive(int speed) override;

private:

    // Define private member variables to store the pins
    int _IN1;
    int _IN2;
    int _ENA;
};