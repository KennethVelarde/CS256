//
// Created by Kenneth-Matthew Velarde on 2019-05-06.
//
#include "Child.h"


Child::Child(std::string name, int age, char sex, std::string mom, std::string dad) : Human(name,age,sex) {
    momName = mom;
    dadName = dad;
    allowance = 0;
}

Child::Child(): Human("", 0 , ','){
    allowance = 0; //initial set of allowance to 0 by default
}

int Child::getAllowance() const {
    std::cout<< "Allowance of child: " << allowance << std::endl;
    return allowance;
}
void Child::printParents() {
    std::cout<< "Mom of child: " << momName << std::endl;
    std::cout<< "Dad of child: " << dadName << std::endl;
}