#ifndef MotorDriver_H
#define MotorDriver_H
#endif

class MotorDriver {
public:
    virtual void init() = 0;
    virtual void drive(int speed) = 0;
};

