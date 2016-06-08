#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "Level.h"
#include "MainController.h"
#include "Sensor.h"
#include "SensorController.h"
#include "TempController.h"


using namespace std;


void MainController::showGreetings()
{
    cout << "##############################" << endl;
    cout << "######## SMART HOUSE #########" << endl;
    cout << "# Aplikacja Inteligentny dom #" << endl;
    cout << "##############################" << endl;
    cout << endl;
}

void MainController::start()
{
    int choice = 0;

    showOptions();
    cin >> choice;

    while (choice != 0)
    {
        switch (choice)
        {
            case 1:
                cout << "\n**** Ustawianie temperatury ****" << endl;
                //tempContr_->setTemperature();
                break;

            case 2:
                cout << "\n**** Sprawdzanie czujnikow ****" << endl;
               // cout <<  sensorContr_->checkSensorsState() << endl;
                break;

            case 3:
                cout << "\n**** Testowanie dzialania czujnikow ****" << endl;
                //testSensors();
                break;


            default:
                cout << "Wybrales niepoprawna opcje!" << endl;
        }

        showOptions();
        cin >> choice;
    }
}

void MainController::showOptions()
{
    cout << "Wybierz opcje:" << endl;
    cout << "[1 - > ustaw temperature]" << endl;
    cout << "[2 - > sprawdz czujniki]" << endl;
    cout << "[3 - > testowanie czujnikow]" << endl;
    cout << "[0 - > wyjscie]" << endl;
}

void MainController::testSensors()
{
    cout << "Stan ktorego sensora chcesz zmienic?" << endl;
    cout << "[0 -> temperatury, 1 -> czadu, 2 -> otwartego okna, 3 -> otwartego garazu]: " << endl;
    int type;
    cin >> type;
    cout << "Na jaki stan zmienic? [0-> OK, 1 -> aktywny] " << endl;
    int state;
    cin >> state;

    //sensorContr_->changeSensorState(type, state == 0 ? false : true);
}
