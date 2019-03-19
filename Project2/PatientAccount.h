//
// Created by Kenneth-Matthew Velarde on 2019-03-16.
//

#ifndef PROJECT2_PATIENTACCOUNT_H
#define PROJECT2_PATIENTACCOUNT_H


class PatientAccount{
private:
    const int daily_rate = 100; // $100 a day
    int days_spent; // number of days in hospital
    int total_charges; //total
public:
    PatientAccount(int days_spent);
    int checkOut();


friend class Surgery;
friend class Pharmacy;


};

#endif //PROJECT2_PATIENTACCOUNT_H
