//
// Created by Kenneth-Matthew Velarde on 2019-03-11.
//

#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"
#include"PoliceOfficer.h"
#include<iostream>

using namespace std;

PoliceOfficer::PoliceOfficer(string oName, int oBadge){
    officerName = oName;
    officerBadge = oBadge;
}
PoliceOfficer::~PoliceOfficer() {

}

ParkingTicket PoliceOfficer::giveTicket(ParkedCar &carparked, ParkingMeter &currentmeter, PoliceOfficer &officer){

    ParkingTicket ticket = ParkingTicket();
    
    if(carparked.minParked > currentmeter.minutesbought){
        
        //taking violator car information for ticket
        ticket.cMake = carparked.make;
        ticket.cModel = carparked.model;
        ticket.cColor = carparked.color;
        ticket.platenum = carparked.plate;

    //officer information
        officerName = officer.officerName;
        officerBadge = officer.officerBadge;

        //difference between parked car minutes purchased compared to the amount of minutes put in meter
        double t = carparked.minParked - currentmeter.minutesbought;

        if( t > 60){
            ticket.amount =(((t / 60 ) - 1) * 10) + 25;
        }
        else if (t <= 60){
            ticket.amount = 25;
        }
        cout << "\nThis car got a ticket! \nTicket amount to pay: " << ticket.amount;
    }
    else {
        cout << "\nThis car did not get a ticket" << endl;
    }
    return ticket;
}

string PoliceOfficer::getName(){
    return officerName;
}
int PoliceOfficer::getBadge(){
    return officerBadge;
}
