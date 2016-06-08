#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "Level.h"
#include "MainController.h"
#include "Sensor.h"
#include "SensorController.h"
#include "TempController.h"


Level::Level()
    : temperature_(0)
{ }

int Level::getTemperature()
{
    return temperature_;
}

void Level::setTemperature(int temperature)
{
    temperature_ = temperature;
}
