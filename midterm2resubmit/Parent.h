//
// Created by Kenneth-Matthew Velarde on 2019-05-06.
//

#ifndef MIDTERM2RESUBMIT_PARENT_H
#define MIDTERM2RESUBMIT_PARENT_H

#include <vector>
#include "Child.h"
#include "Human.h"

class Parent: public Human{
private:
std::vector<std::string> children; //save the name of the children
Parent();

public:
    Parent(std::string name, int age, char sex);
    void printChild();

    void setChild(Child kid);
    void setChildAllowance(int allowance, Child &kid);

};


#endif //MIDTERM2RESUBMIT_PARENT_H
