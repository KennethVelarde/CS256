//
// Created by Kenneth-Matthew Velarde on 2019-05-06.
//

#include "Parent.h"

Parent::Parent(std::string name, int age, char sex):Human(name,age,sex){

}

Parent::Parent(): Human("",0,',') {

}

void Parent::printChild() {

    if(children.empty()){
        return;
    }
    for(std::string &j :  children){
        std::cout<< j << " " << std::endl;
    }

}

void Parent::setChildAllowance(int allowance, Child &kid) {
    kid.allowance = allowance;
}
void Parent::setChild(Child kid) {
    children.push_back(kid.getName());
}

