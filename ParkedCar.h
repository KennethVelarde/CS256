//
// Created by Kenneth-Matthew Velarde on 2019-03-11.
//

#ifndef PARKEDCAR_H
#define PARKEDCAR_H


#include<iostream>
using namespace std;


class ParkedCar{
private:
    string make; // type of car(Toyota, etc.
    string model; // car model (Camry, etc.)
    string color;
    int plate; //license plate
    int minParked;

public:
    ParkedCar(string, string, string, int, int);
    ~ParkedCar();

    string getMake();
    string getModel();
    string getColor();
    int getPlate();
    int getminParked();


friend class ParkingTicket;
friend class PoliceOfficer;


};

#endif
