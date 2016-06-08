#include <string>
#include <iostream>
#include <stdio.h>
#include <cstdlib>


using namespace std;

class SensorController
{
public:
    SensorController();

    std::string checkSensorsState();
    void changeSensorState(int typeOfSensor, bool state);

private:
    void tempSensor_();
    void gasSensor_();
    void openWindowSensor_();
    void openGarageSensor_();
};
