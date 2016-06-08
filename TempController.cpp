#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "Level.h"
#include "MainController.h"
#include "Sensor.h"
#include "SensorController.h"
#include "TempController.h"



void TempController::setTemperature()
{
    int choice = 0;
    cout << "W ktorym pomieszczeniu chcesz ustawic temperature?" << endl;
    cout << "[0 -> Parter]" << endl;
    cout << "[1 -> Pierwsze pietro]" << endl;
    cin >> choice;

    int temp = 0;
    switch (choice)
    {
        case 0:
            cout << "Wybrano: Parter" << endl;
            cout << "Podaj wartosc temperatury: " << endl;
            cin >> temp;
            groundFloor_->setTemperature(temp);
            cout << "Ustawiono temperature: " << groundFloor_->getTemperature() << " stopni C." << endl << endl;
            break;

        case 1:
            cout << "Wybrano: Pierwsze Pietro" << endl;
            cout << "Podaj wartosc temperatury: " << endl;
            cin >> temp;
            firstFloor_->setTemperature(temp);
            cout << "Ustawiono temperature: " << firstFloor_->getTemperature() << " stopni C." << endl << endl;
            break;

        default:
            cout << "Nie wybrales poprawnego pietra!" << endl;
    }
}
