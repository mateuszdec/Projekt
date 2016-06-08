#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "Level.h"
#include "MainController.h"
#include "Sensor.h"
#include "SensorController.h"
#include "TempController.h"


Sensor::Sensor()
    : state_(false)
{ }

bool Sensor::isActive()
{
    return state_;
}

void Sensor::changeState(bool state)
{
    state_ = state;
}
