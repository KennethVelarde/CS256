//
// Created by Kenneth-Matthew Velarde on 2019-03-26.
//

#include "PersonData.h"
#include "CustomerData.h"
#include <iostream>

CustomerData::CustomerData(int customerNum, bool listCheck, std::string lName, std::string fName, std::string address,
                           std::string city, std::string state, std::string z, std::string phNumber) {
    customerNum = 0;
    listCheck = false;
}

int CustomerData:: getCustomerNumber(){return customerNumber;}
bool CustomerData::getcheckMailingList(){return mailingList;}
void CustomerData::setCustomerNumber(int custNum){customerNumber = custNum;}
void CustomerData::setcheckMailingList(bool answer){mailingList = answer;}

CustomerData::CustomerData() {}




