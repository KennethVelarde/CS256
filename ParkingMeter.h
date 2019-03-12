//
// Created by Kenneth-Matthew Velarde on 2019-03-11.
//

#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter{
private:
    int minutesbought; // number of minutes purchased

public:
    ParkingMeter(int);
    ~ParkingMeter();

    friend class ParkingTicket;
    friend class PoliceOfficer;

};

#endif
