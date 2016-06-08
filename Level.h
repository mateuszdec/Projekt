#include <iostream>
#include <stdio.h>
#include <cstdlib>


class Level
{
public:
    Level();

    int getTemperature();
    void setTemperature(int temperature);

private:
    int temperature_;
};
