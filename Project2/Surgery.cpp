//
// Created by Kenneth-Matthew Velarde on 2019-03-17.
//

#include "Surgery.h"
#include <iostream>

using namespace std;

Surgery::Surgery(){

}

void Surgery::addCharges(PatientAccount &patientaccount, string name){

    if(name == colectomy){
        patientaccount.total_charges += colectomy_price;
    }
    else if(name == heart_bypass){
        patientaccount.total_charges += heart_bypass_price;
    }
    else if(name == c_section){
        patientaccount.total_charges += c_section_price;
    }
    else if(name == myectomy){
        patientaccount.total_charges += myectomy_price;
    }
    else if(name == craniectomy){
        patientaccount.total_charges += craniectomy_price;
    }
    else{
        cout << "not a surgery we perform" << endl;
    }



}
