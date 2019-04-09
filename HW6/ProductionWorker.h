//
// Created by Kenneth-Matthew Velarde on 2019-04-08.
//

#ifndef HW3_PRODUCTIONWORKER_H
#define HW3_PRODUCTIONWORKER_H

#include <iostream>
#include "Employee.h"

using std::string;

class ProductionWorker : public Employee {
private:
    int shift;
    double payRate;

public:
//ProductionWorker():shift(0), payRate(0.0);
//ProductionWorker();
//ProductionWorker(string nam, int num1, string hireD, int sh, int pr);
//
//int getShift();
//double getPayRate();
//
//void setShift(int s);
//void setPayRate(double pr);

class InvalidShift{};
class InvalidPayRate{};

    ProductionWorker() {
            shift = 0;
            payRate = 0.0;
    }

    ProductionWorker(string na, int nu, string hiD, int sh1, double pr1) : Employee(na,nu,hiD) {
            shift = sh1;
            payRate = pr1;
    }

    int getShift() {
            return shift;
    }

    double getPayRate() {
            return payRate;
    }

    void setShift(int s) {
        if((s == 0) or (s == 1)){
            shift = s;
        }else{
            throw InvalidShift();
        }

    }

    void setPayRate(double pr) {
        if(pr > 0){
            payRate = pr;
        }else{
            throw InvalidPayRate();
        }



    }
};


#endif //HW3_PRODUCTIONWORKER_H
