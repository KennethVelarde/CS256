//
// Created by Kenneth-Matthew Velarde on 2019-03-16.
//

#ifndef PROJECT2_PHARMACY_H
#define PROJECT2_PHARMACY_H

#include "PatientAccount.h"
#include <iostream>

using namespace std;

class Pharmacy{
private:
    string tylenol = "tylenol";
    const int tylenol_price = 25;

    string advil = "advil";
    const int advil_price = 50;

    string nyquil = "nyquil";
    const int nyquil_price = 10;

    string dayquil = "dayquil";
    const  int dayquil_price = 15;

    string lyrica = "lyrica";
    const int lyrica_price = 20;
public:
    Pharmacy();
    void addToTotal(PatientAccount &account, std::string meds);

};

#endif //PROJECT2_PHARMACY_H
