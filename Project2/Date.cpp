#include <iostream>
#include "Date.h"

using namespace std;

    Date:: Date (int m, int d, int y){
        if(m <=12 && m>=1) {
            month = m;
        }
        else{
            month = 0;
            cout<< "Month does not exist" << endl;
        }

        if(day<monthDays(month) && d >=1) {
            day = d;
        }

        else {
            day = 0;
            cout << "day does not exist" << endl;
        }
       year = y;
    }

    Date::Date() : month(0), day(0), year(0){

    }

   Date& Date::operator++() {
        day += 1; // increments by one day
        if(day > monthDays(month)){
            month += 1; // next month
            day = 1; // start of next month
        }

        //new years
        if(month == 12 && day == 32){
            month = 1;
            day = 1;
            year += year;
        }
        return *this;
    }// end operator ++


    Date& Date::operator--() {
        day -= 1; // decrements by one day
        if(day <= 0){
            month -= 1; // previous month
            day = monthDays(month); // start of next month
        }

        //previous new years
        if(month == 1 && day == 0){
            month = 12;
            day = 31;
            year -= year;
        }
        return *this;
    } // end operator --

    int Date::operator - (const Date &rhs){
//        return (year - rhs.year)*365
//                + (month-rhs.month)*30
//                + (day - rhs.day);
    return (day -rhs.day);
    }

    ostream & operator << (ostream &output, Date & test){
        test.printDateNum2();
        return output;
    } // end operator <<


    istream &operator >> (istream &input, Date &test) {
        bool correct_d(true);
        bool correct_m{true};
        int dayz = 0;
        int monthz = 0;
//        cout<< "enter a date: " << endl;

        while (correct_m) {
            input >> monthz;

        if (monthz <= 12 && monthz >= 1) {
            test.month = monthz;
            correct_m = false;
        } else {
            test.month = 0;
            cout << "not a month \n";
        }
    }
        while(correct_d){
            input >> dayz;
            if(dayz <= test.monthDays(test.month) && dayz >= 1){
                test.day = dayz;
                correct_d = false;
            }else{
                test.day = 0;
               cout<< "not a real day. \n";

            }

        }
        input >> test.year;
        return input;

    } // end operator >>



    //prints all integers MM/DD/YY
    void Date::printDateNum1(){
        if(day > 31 || day < 1 || month > 12 || month < 1){
            cout <<"incorrect input, choose again." << endl;
        }
        else {
            cout << month << "/" << day << "/" << year << endl;
        }
    }// end printDateNum1


    //prints month in string, day and year in integer Month /DD/ YY
    void Date::printDateNum2(){
        string monthName[] = {"January", "February", "March", "April",
                              "May", "June", "July", "August", "September",
                              "October", "November", "December"};
        if(day > 31 || day < 1 || month > 12 || month < 1){
            cout <<"incorrect input, choose again." << endl;
        }
        else {
            cout << monthName[month - 1] << " " << day << ", " << year << endl;
        }
    }// end printDateNum2


    //prints all integers except month DD/Month/ Year
    void Date::printDateNum3(){
        string monthName[] = {"January", "February", "March", "April",
                              "May", "June", "July", "August", "September",
                              "October", "November", "December"};
            if(day > 31 || day < 1 || month > 12 || month < 1){
                cout <<"incorrect input, choose again." << endl;
            }
            else {
                cout << day << " " << monthName[month - 1] << " " << year << endl;
            }
    }// end printDateNum3

    string Date::monthName(int t_month) {
        switch(t_month){
            case 1: return "January";
            case 2: return "February";
            case 3: return "March";
            case 4: return "April";
            case 5: return "May";
            case 6: return "June";
            case 7: return "July";
            case 8: return "August";
            case 9: return "September";
            case 10: return "October";
            case 11: return "November";
            case 12: return "December";

            default:cout << " not a valid month\n";
        } // end switch
        return " ";

    }

    int Date::monthDays(int m) {

        switch(m) {
            case 1:return 31;
            case 2:return 28;
            case 3:return 31;
            case 4:return 30;
            case 5:return 31;
            case 6:return 30;
            case 7:return 31;
            case 8:return 31;
            case 9:return 30;
            case 10:return 31;
            case 11:return 30;
            case 12:return 31;
            default: cout<< "not a month \n";
        }// end switch
        return 0;
    }


