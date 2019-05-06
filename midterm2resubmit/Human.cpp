//
// Created by Kenneth-Matthew Velarde on 2019-05-06.
//

#include "Human.h"
Human::Human(std::string name, int age , char sex){
    h_name = name;
    h_age = age;
    h_sex = sex;
}

Human::Human(){

}//default constructor

Human::~Human(){

}//deconstructor

std::string Human::getName() {
    return h_name;
}

int Human::getAge() {
    return h_age;
}

char Human::getSex() {
    return h_sex;
}

void Human::setName(std::string name) {
    h_name = name;
}

void Human::setAge(int age) {
    h_age = age;
}

void Human::setSex(char sex) {
    h_sex = sex;
}