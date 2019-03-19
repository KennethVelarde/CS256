//
// Created by Kenneth-Matthew Velarde on 2019-03-16.
//


#ifndef PROJECT2_SURGERY_H
#define PROJECT2_SURGERY_H

#include"PatientAccount.h"
#include <iostream>

using namespace std;
class Surgery{
private:
    string colectomy = "colectomy";
    const int colectomy_price = 25;

    string heart_bypass = "heart bypass";
    const int heart_bypass_price = 50;

    string c_section  = "c-section";
    const int c_section_price = 75;

    string myectomy = "myectomy";
    const int myectomy_price = 30;

    string craniectomy = "craniectomy";
    const int craniectomy_price = 95;


public:
    Surgery();
    void addCharges(PatientAccount &patientaccount, string name);

};

#endif //PROJECT2_SURGERY_H
