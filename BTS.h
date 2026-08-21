#ifndef BTS_H
    #define BTS_H
#endif

#include <MotorDriver.h>
#include <Arduino.h>

class BTS : public MotorDriver {
public:
    
    // Constructor
    BTS(int RPWM, int LPWM);

    // Override init and drive from superclass
    void init() override;
    void drive(int speed) override;

private:

    // Define private variables
    int _RPWM;
    int _LPWM;
}