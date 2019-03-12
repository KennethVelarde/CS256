//
// Created by Kenneth-Matthew Velarde on 2019-03-10.
//

#ifndef DIE_H
#define DIE_H

class Die{
private:
    int sides; //number of sides
    int value; // die's value

public:
    Die(int = 6); // Constructor
    void roll(); // rolls die
    int getSides(); // returns number of sides
    int getValues(); // returns die's value
};




#endif //DIE_H
