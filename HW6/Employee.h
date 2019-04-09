//
// Created by Kenneth-Matthew Velarde on 2019-04-08.
//

#ifndef HW3_EMPLOYEE_H
#define HW3_EMPLOYEE_H

#include <iostream>

class Employee{
private:
    std::string name;
    int number;
    std::string hireDate;
public:

    class InvalidEmployeeNumber{}; // Exception

    Employee(std::string name1, int num1, std::string hire1) {
        name = name1;
        number = num1;
        hireDate = hire1;
    }
    //default
    Employee(): name(""), number(0),hireDate(""){}

    std::string getName() {
        return name;
    }

    int getNumber() {
        return number;
    }

    std::string getHireDate() {
        return hireDate;
    }

    void setName(std::string n) {
        name = n;
    }

    void setNumber(int num1) {
        if(num1 > 0 and num1 < 9999){
            number = num1;
        }else
            throw InvalidEmployeeNumber(); //constructor for InvalidEmployeeNumber

    }

    void setHireDate(std::string hd) {
        hireDate = hd;
    }







};

#endif
