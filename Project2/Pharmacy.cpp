//
// Created by Kenneth-Matthew Velarde on 2019-03-16.
//

#include"Pharmacy.h"
#include<iostream>

using namespace std;

Pharmacy::Pharmacy() {
}

    void Pharmacy::addToTotal(PatientAccount &account, std::string meds){
        if(meds == tylenol){
            account.total_charges += tylenol_price;
        }
        else if(meds == advil){
            account.total_charges += advil_price;
        }
        else if(meds == nyquil){
            account.total_charges += nyquil_price;
        }
        else if(meds == dayquil){
            account.total_charges += dayquil_price;
        }
        else if(meds == lyrica){
            account.total_charges += lyrica_price;
        }
        else{
            cout<< "medicine not avalible" << endl;
        }

    }// end addtoTotal

