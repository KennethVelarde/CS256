//
// Created by Kenneth-Matthew Velarde on 2019-03-11.
//

#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

//#include "PoliceOfficer.h"
//#include "ParkedCar.h"
//#include "ParkingMeter.h"
#include<cmath>




using namespace std;

class ParkingTicket{
private:
    double amount;
    string cMake;
    string cModel;
    string cColor;
    int platenum;
    string cName;
    int badge;


public:
    ParkingTicket();
    ~ParkingTicket();
    ParkingTicket(string amake, string amodel, string acolor, string plate);

friend class PoliceOfficer;

};
#endif
