//
// Created by Kenneth-Matthew Velarde on 2019-03-11.
//

#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

using namespace std;

class PoliceOfficer{
private:
    string officerName;
    int officerBadge;
public:
    PoliceOfficer(string, int);
    ~PoliceOfficer();

    ParkingTicket giveTicket(ParkedCar &carparked, ParkingMeter &currentmeter, PoliceOfficer &officer);

    friend class ParkingTicket;

    string getName();
    int getBadge();

};



#endif
