#include <iostream>
#include <string>
#include <vector>

class Parent;
class Child;

class Human{
    friend class Parent;
    friend class Child;

private:
    std::string name;
    int age;
    char sex;
    Human(){
        name = " ";
        age =0;
        sex = ' ';
    }
public:
    std::string getName(){ return name;}
    int getAge(){return age;}
    char getSex(){return sex;}

    void setName(std::string humName){
        name = humName;
    }
    void setAge(int humAge){
        name = humAge;
    }
    void setName(char humSex){
        name = humSex;
    }

protected:
    Human(std::string n, int a, char s){
        name = n;
        age = a;
        sex = s;
    }
    virtual ~Human(){std::cout<< "deconstructing base class\n";}

    friend class Parent;
    friend class Child;

};

class Child: public Human
{
private:


    std::string momName;
    std::string dadName;
    int allowance;

    Child(); //default Constructor

public:
    Child(std::string cName, int cAge, char cSex, std::string mName,
          std::string dName){

        name = cName;
        age = cAge;
        sex = cSex;
        mName = "March";
        dName = "Homer";
        allowance = 0;
    }
    int getAllowance()const; //prints allowance

    void printParent(){
        std::cout<< momName << std::endl;
        std::cout<< dadName << std::endl;
    }

    friend class Parent;

};

class Parent: public Human
        {
private:
    std::vector<Child> children;
    Parent();

public:
    Parent(std::string pName, int pAge, char pSex){
        name = pName;
        age = pAge;
        sex = pSex;
    }
    void printChild(){}
    void setChild(Child ch) {children = ch;}
    void setChildAllowance(int allowance, Child c){
    };
    friend class Child;
};





int Child::getAllowance() const {std::cout<< allowance << std::endl;
    return allowance;}


void printInfo(Human hum){
    hum.getName();
    hum.getAge();
    hum.getSex();
}



int main() {

    std::vector<Child> s;
    Parent Homer ("Homer", 36, 'M');
    Parent March("March", 34, 'f');
    Child Lisa("Lisa",12, 'F',"March", "Homer");
    Child Bart("Bart",10, 'M',"March", "Homer");
    Child Maggie("Maggie",3, 'F',"March", "Homer");

    s.push_back(Lisa);
    s.push_back(Bart);
    s.push_back(Maggie);

    Homer.setChildAllowance(5,);

//    Lisa.push_back
    int temp = Bart.getAllowance();
    std::cout << temp << std::endl;

Bart.getAllowance(5, Bart);
//std::cout << "Hello World\n";

printInfo(March);
printInfo(Lisa);
    return 0;




}

