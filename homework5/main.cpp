#include <cstdio>
#include <string>
#include "PersonData.h"
#include "CustomerData.h"
#include "PreferredCustomer.h"


//using namespace std;

// 1a. REMOVED NAMESPACE/////////////////////////////////////////////////////////


// Base class

class Animal {

    std::string _name;

    std::string _type;

    std::string _sound;

    // private constructor prevents construction of base class

    Animal() {};

protected:

    // protected constructor for use by derived classes only!

    Animal(const std::string & n, const std::string & t, const std::string & s)

            : _name(n), _type(t), _sound(s) {       //using C++ 11 in-class member initalizer

        printf("Animal Constructed\n");

    }

public:

    void speak() const;

    const std::string & name() const { return _name; }

    const std::string & type() const { return _type; }

    const std::string & sound() const { return _sound; }

    std::string snap() { return "Animal_Snap"; }     //redefine same signature



};

//To deifine outside use class name,SCOPE OPERATOR,Member function

void Animal::speak() const {

    printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());

}



// Dog class - derived from Animal

class Dog : public Animal {

    int walked;

public:

    Dog(std::string n) : Animal(n, "dog", "woof"), walked(0) {

        printf("Dog Constructed\n");

    };

    int walk() { return ++walked; }

    std::string snap() { return "Dog_Snap"; }    //override same signature

};



// Cat class - derived from Animal

class Cat : public Animal {

    int petted;

public:

    Cat(std::string n) : Animal(n, "cat", "meow"), petted(0) {

        printf("Cat Constructed\n");

    };

    int pet() { return ++petted; }

};



class Donkey :public Animal {

    int carried;

public:

    Donkey(std::string n) : Animal(n, "donkey", "hee-haw"), carried(0) {

        printf("Donkey constructed\n");

    };

    int carry() { return ++carried; }

};


// Pig class - derived from Animal

class Pig : public Animal {

    int fed;

public:

    Pig(std::string n) : Animal(n, "pig", "oink"), fed(0) {

        printf("Pig Constructed\n");

    };

    int feed() { return ++fed; }

};



//NOTICE INPUT TYPE

std::string displayName(const Animal &A) {

    return A.name();

}


void customerDisplay(CustomerData test);

int main(int argc, char ** argv) {

    Dog d("Rover");

    Cat c("Fluffy");

    Pig p("Arnold");

    Donkey donk("Eeyore");



    //Poly

    //calling a specific ANIMAL -> a derived class of base

    printf("%s\n", displayName(d).c_str() );

    printf("%s\n", displayName(c).c_str());

    printf("%s\n", displayName(p).c_str());





    //d.snap()  //what's called?

    printf("%s\n", d.snap().c_str());

//1b. call snap from both base case and derived case////////////////////////////
// will return "Animal_Snap"
    printf("%s\n", d.Animal::snap().c_str());

    d.speak();

    c.speak();

    p.speak();

    donk.speak();



    printf("the dog has been walked %d times\n", d.walk());

    printf("the cat has been petted %d times\n", c.pet());

    printf("the pig has been fed %d times\n", p.feed());

    printf("the Donkey has been carried %d times\n", donk.carry());


   printf(" \n");

    std::cout << "-- Person Data and Customer Data Problem --\n";


    CustomerData test(101, true, "Velarde", "Kenneth", "3801 W Temple Ave",
            "Pomona", "CA", "91768", "909-869-7659");

    test.setCustomerNumber(101);
    test.setcheckMailingList(true);
    test.setlastName("Velarde");
    test.setfirstName("Kenneth");
    test.setAddress("3801 W Temple Ave");
    test.setState("CA");
    test.setZip("91214");
    test.setPhone("909-869-7659");

    std::cout << "Customer details \n";


    customerDisplay(test);


    std::cout << "-- Preferred Customer --\n";

    PreferredCustomer cust;
    double purchase;
    std::cout << "\nPurchase amount: $" << cust.getPurchaseAmount() << std::endl;

    std::cout << "\nDiscount level " << cust.getDiscountLevel() << std::endl;

    //add a purchase

    std::cout << "Enter a purchase amount: ";
    std::cin >> purchase;
    cust.addPurchases(purchase);

    std::cout << "New purchase amount: $" << cust.getPurchaseAmount() << std::endl;
    std::cout << "\nNew discount level: " << cust.getDiscountLevel() << std::endl;
}
void customerDisplay(CustomerData test){

    std::cout << test.getCustomerNumber() << std::endl;
    std::cout << test.getcheckMailingList() << std::endl;
    std::cout << test.getlastName() << std::endl;
    std::cout << test.getfirstName() << std::endl;
    std::cout << test.getAddress() << std::endl;
    std::cout << test.getState() << std::endl;
    std::cout << test.getZip() << std::endl;
    std::cout << test.getPhone() << std::endl;
}


