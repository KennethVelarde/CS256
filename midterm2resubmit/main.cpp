#include <iostream>
#include "Child.h"
#include "Parent.h"


void printInfo(Human &human){
    std::cout<< "Name: " << human.getName() << std::endl;
    std::cout<< "Age: " << human.getAge() << std::endl;
    std::cout<< "Sex: " << human.getSex() << std::endl;

}

int main() {
    //create parents
  Parent Homer = Parent("Homer", 36, 'M');
  Parent Marge = Parent("Marge", 34, 'F');

    //create children
  Child Bart = Child("Bart", 10, 'M', "Marge", "Homer");
  Child Lisa = Child("Lisa", 12, 'F', "Marge", "Homer");
  Child Maggie = Child("Maggie", 3, 'F', "Marge", "Homer");

  //children set in parent vector
  Homer.setChild(Bart);
  Homer.setChild(Lisa);
  Homer.setChild(Maggie);

    Marge.setChild(Bart);
    Marge.setChild(Lisa);
    Marge.setChild(Maggie);

  std::cout <<std::endl;
  std::cout << "--Allowance-- " <<std::endl;
  std::cout <<std::endl;

    Bart.getAllowance(); //print allowance
    Homer.setChildAllowance(5, Bart); // set allowance to 5
    Bart.getAllowance(); //show that allowance of child(Bart) has change
    Bart.printParents(); // child prints out all parents

  std::cout <<std::endl;
  std::cout << "--printInfo-- " <<std::endl;
  std::cout <<std::endl;
    //printInfo fxn
    printInfo(Marge);
    printInfo(Lisa);
}

