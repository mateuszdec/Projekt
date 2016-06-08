#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "Level.h"
#include "MainController.h"
#include "Sensor.h"
#include "SensorController.h"
#include "TempController.h"






std::string SensorController::checkSensorsState()
{
   // std::string result;
    if (tempSensor_->isActive())
        result += "!!!! Alarm w czujniku temperatury !!!!\n";
    else
        result += "Czujnik temperatury: OK\n";

    if (gasSensor_->isActive())
        result += "!!!! Alarm w czujniku czadu !!!!\n";
    else
        result += "Czujnik czadu: OK\n";

    if (openWindowSensor_->isActive())
        result += "!!!! Alarm w czujniku otwartego okna !!!!\n";
    else
        result += "Czujnik otwartego okna: OK\n";

    if (openGarageSensor_->isActive())
        result += "!!!! Alarm w czujniku otwartego garazu !!!!\n";
    else
        result += "Czujnik otwartego garazu: OK\n";

    return result;
}

