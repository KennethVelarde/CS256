//
// Created by Kenneth-Matthew Velarde on 2019-03-26.
//

#ifndef HOMEWORK5_PREFERREDCUSTOMER_H
#define HOMEWORK5_PREFERREDCUSTOMER_H

#include<iostream>
#include"CustomerData.h"

class PreferredCustomer: public CustomerData{
private:
    double purchasesAmount;
    double discountLevel;
public:
    PreferredCustomer();
    PreferredCustomer(int customerNum, bool listCheck, std::string lName, std::string fName, std::string address,
                      std::string city, std::string state, std::string z, std::string phNumber, double purchaseAmt,
                      double discountL);

    double getPurchaseAmount();
    double getDiscountLevel();

    void setPurchaseAmount(double purchaseAmt);
    void setDiscountLevel(double discountLev);

    void addPurchases(double newPurchAmt);
    void findDiscountLevel();

};

#endif //HOMEWORK5_PREFERREDCUSTOMER_H
