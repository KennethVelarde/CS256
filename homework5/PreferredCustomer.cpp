//
// Created by Kenneth-Matthew Velarde on 2019-03-26.


#include <iostream>
#include "PreferredCustomer.h"


//
//double getPurchaseAmount();
//double getDiscountLevel();
//
//void setPurchaseAmount(double purchaseAmt);
//void setDiscountLevel(double discountLev);

PreferredCustomer::PreferredCustomer() : CustomerData(){
    purchasesAmount = 0;
    discountLevel = 0;
}

PreferredCustomer::PreferredCustomer(int customerNum, bool listCheck, std::string lName, std::string fName,
                                     std::string address, std::string city, std::string state, std::string z,
                                     std::string phNumber, double purchaseAmt, double discountL){
    purchasesAmount = purchaseAmt;
    discountLevel = discountL;
//    setDiscountLevel()

}

double PreferredCustomer::getPurchaseAmount(){return purchasesAmount;}
double PreferredCustomer::getDiscountLevel(){return discountLevel;}

void PreferredCustomer::setPurchaseAmount(double purchaseAmt) {
        purchasesAmount = purchaseAmt;

}
void PreferredCustomer::setDiscountLevel(double discountLev) {
    discountLevel = discountLev;
}
void PreferredCustomer::findDiscountLevel() {
    if(purchasesAmount >= 2000)
        discountLevel = .10;
    else if(purchasesAmount >= 1500)
        discountLevel = .07;
    else if(purchasesAmount >= 1000)
        discountLevel = .06;
    else if(purchasesAmount >= 500)
        discountLevel = .05;
    else if(purchasesAmount < 0) // also checks input validation
        std::cout << "Invalid amount. Restart the program." << std::endl;
        return;
}

void PreferredCustomer::addPurchases(double newPurchAmt) {
    purchasesAmount += newPurchAmt;
    findDiscountLevel();
}
