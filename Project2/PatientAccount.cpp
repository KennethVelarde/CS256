//
// Created by Kenneth-Matthew Velarde on 2019-03-17.
//

#include "PatientAccount.h"
#include <iostream>

using namespace std;

PatientAccount::PatientAccount(int days) {
    days_spent = days;
    total_charges = 0;
}

int PatientAccount::checkOut(){
    total_charges += daily_rate * days_spent;
    return total_charges;
}