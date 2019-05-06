//
// Created by Kenneth-Matthew Velarde on 2019-05-06.
//

#ifndef MIDTERM2RESUBMIT_CHILD_H
#define MIDTERM2RESUBMIT_CHILD_H

#include <iostream>
#include "Human.h"

class Child : public Human{
private:
    std::string momName;
    std::string dadName;
    int allowance;
    Child();

public:
    Child(std::string name, int age, char sex, std::string mom, std::string dad);

    void printParents();
    int getAllowance() const;

    friend class Parent; //Parent access

};

#endif //MIDTERM2RESUBMIT_CHILD_H
