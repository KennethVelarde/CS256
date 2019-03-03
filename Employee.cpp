#include <iostream>
using namespace std;
class Employee {
private:
    string name;
    int idNumber;
    string department;
    string title;

public:
    Employee(string n, int i, string d, string t) {
        name = n;
        idNumber = i;
        department = d;
        title = t;
    }

    Employee(string n, int i) {
        name = n;
        idNumber = i;
        department = "";
        title = "";


    }

    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        title = "";
    }

    //setter methods

    void setNameOfEmployee(string emplName) {
       name = emplName;
    }
    void setiDNumOfEmployee(int empliDNum) {
        idNumber = empliDNum;
    }
    void setDepartmentOfEmployee(string emplDepartment) {
        department = emplDepartment;
    }
    void setTitleOfEmployee(string emplTitle) {
        title = emplTitle;
    }

    //getter methods
    string getNameOfEmployee() {
        return name;
    }
    int getiDNumOfEmployee() {
        return idNumber;
    }
    string getDepartmentOfEmployee() {
       return department;
    }
    string getTitleOfEmployee() {
        return title;
    }

    };




        int main() {

        int susanId = 47899;
        int markId = 39119;
        int joyId = 81774;

//        Employee SM("Susan Meyers",susanId, "Accounting", "Vice President");
//        Employee MJ("Mark Jones",markId,"IT","Programmer");
//        Employee JR("Joy Rogers", joyId, "Manufacturing","Engineer");

        //Susan Meyers declaration
        Employee SM, MJ, JR;
        //set information

        //Susan Meyers
        SM.setNameOfEmployee("Susan Meyers");
        SM.setiDNumOfEmployee(susanId);
        SM.setDepartmentOfEmployee("Accounting");
        SM.setTitleOfEmployee("Vice President");
            std::cout<<endl;
            //Mark Jones
            MJ.setNameOfEmployee("Mark Jones");
            MJ.setiDNumOfEmployee(markId);
            MJ.setDepartmentOfEmployee("IT");
            MJ.setTitleOfEmployee("Programmer");
                //Joy Rogers
                JR.setNameOfEmployee("Joy Rogers");
                JR.setiDNumOfEmployee(joyId);
                JR.setDepartmentOfEmployee("Manufacturing");
                JR.setTitleOfEmployee("Engineer");

            //getting information

        //Susan Meyers
        std::cout<< SM.getNameOfEmployee() << endl;
        std::cout<< SM.getiDNumOfEmployee() << endl;
        std::cout<< SM.getDepartmentOfEmployee() << endl;
        std::cout<< SM.getTitleOfEmployee() << endl;

            std::cout<<endl;
            //Mark Jones
            std::cout<< MJ.getNameOfEmployee() << endl;
            std::cout<< MJ.getiDNumOfEmployee() << endl;
            std::cout<< MJ.getDepartmentOfEmployee() << endl;
            std::cout<< MJ.getTitleOfEmployee() << endl;
            std::cout<<endl;
        //Joy Rogers
                std::cout<< JR.getNameOfEmployee() << endl;
                std::cout<< JR.getiDNumOfEmployee() << endl;
                std::cout<< JR.getDepartmentOfEmployee() << endl;
                std::cout<< JR.getTitleOfEmployee() << endl;
            std::cout<<endl;
        return 0;
        }// end main

