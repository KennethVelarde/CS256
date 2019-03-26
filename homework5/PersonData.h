//
// Created by Kenneth-Matthew Velarde on 2019-03-25.
//
#include <iostream>

//using std::string;
//using std::endl;

#ifndef HOMEWORK5_PERSONDATA_H
#define HOMEWORK5_PERSONDATA_H
class PersonData{
private:
    std::string lastName;
    std::string firstName;
    std::string address;
    std::string city;
    std::string state;
    std::string zip;
    std::string phone;
public:
    PersonData();
    PersonData(std::string ln, std::string fn, std::string a,
                std::string s, std::string c, std::string z, std::string p);
    void setlastName(std::string lastn);
    void setfirstName(std::string firstn);
    void setAddress(std::string addr);
    void setCity(std::string cit);
    void setState(std::string state);
    void setZip(std::string zipc);
    void setPhone(std::string phNum);

    std::string getlastName();
    std::string getfirstName();
    std::string getAddress();
    std::string getCity();
    std::string getState();
    std::string getZip();
    std::string getPhone();


};

#endif //HOMEWORK5_PERSONDATA_H
