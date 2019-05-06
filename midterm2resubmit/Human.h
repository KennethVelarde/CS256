//
// Created by Kenneth-Matthew Velarde on 2019-05-06.
//

#ifndef MIDTERM2RESUBMIT_HUMAN_H
#define MIDTERM2RESUBMIT_HUMAN_H

#include <iostream>


class Human{
private:
    std::string h_name;
    int h_age;
    char h_sex;
    Human();

public:
    //setters
    std::string getName();
    int getAge();
    char getSex();

    //getters
    void setName(std::string);
    void setAge(int);
    void setSex(char);

protected:
    Human(std::string, int, char);
    virtual ~Human();

};



#endif //MIDTERM2RESUBMIT_HUMAN_H
