//
// Created by Kenneth-Matthew Velarde on 2019-03-26.
//

#include <iostream>
#include "PersonData.h"




PersonData::PersonData(std::string ln1, std::string fn1, std::string a1,
                       std::string c1, std::string s1, std::string z1, std::string p1){
    lastName = ln1;
    firstName = fn1;
    address = a1;
    city = c1;
    state = s1;
    zip = z1;
    phone = p1;

}
PersonData::PersonData(){
    lastName = "";
    firstName = "";
    address = "";
    city = "";
    state = "";
    zip = "";
    phone = "";

}



void PersonData::setlastName(std::string LName) {lastName = LName;}
void PersonData::setfirstName(std::string FName) {firstName = FName;}
void PersonData::setAddress(std::string a) {address = a;}
void PersonData::setCity(std::string c) {city = c;}
void PersonData::setState(std::string s) {state = s;}
void PersonData::setZip(std::string z) {zip = z;}
void PersonData::setPhone(std::string p) {phone = p;}

std::string PersonData::getlastName() {return lastName;}
std::string PersonData::getfirstName(){return firstName;}
std::string PersonData::getAddress(){return address;}
std::string PersonData::getCity(){return city;}
std::string PersonData::getState(){return state;}
std::string PersonData::getZip(){return zip;}
std::string PersonData::getPhone(){return phone;}







