//
// Created by Kenneth-Matthew Velarde on 2019-03-16.
//

#ifndef PROJECT2_DATE_H
#define PROJECT2_DATE_H

#include <iostream>
using namespace std;

class Date{

private:
    int month;
    int day;
    int year;

public:
    Date(int m1, int d1, int y1);
    Date();

    string monthName(int t_month);
    int monthDays(int t_month);


void printDateNum1();
void printDateNum2();
void printDateNum3();

Date& operator ++ ();
Date& operator -- ();


int operator-(const Date &obj2);

friend ostream &operator << (ostream &out, Date& date);
friend istream &operator >> (istream &in, Date &date);

};



#endif //PROJECT2_DATE_H
