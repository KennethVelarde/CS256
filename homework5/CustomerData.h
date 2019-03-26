//
// Created by Kenneth-Matthew Velarde on 2019-03-26.
//

#ifndef HOMEWORK5_CUSTOMERDATA_H
#define HOMEWORK5_CUSTOMERDATA_H

#include <iostream>
#include "PersonData.h"
class CustomerData: public PersonData{
private:
    int customerNumber;
    bool mailingList;
public:
    CustomerData(int customerNum, bool listCheck,
            std::string lName,std::string fName,
                 std::string address, std::string city,
                 std::string state, std::string z, std::string phNumber);

    CustomerData();

    int getCustomerNumber();
    bool getcheckMailingList();

    void setCustomerNumber(int custNum);
    void setcheckMailingList(bool answer);
  //  void displayCustomer(CustomerData c1);

};

#endif //HOMEWORK5_CUSTOMERDATA_H
