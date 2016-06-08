#include <iostream>
#include <stdio.h>
#include <cstdlib>


class Sensor
{
public:
    Sensor();
    bool isActive();
    void changeState(bool state);

private:
    bool state_;
};
