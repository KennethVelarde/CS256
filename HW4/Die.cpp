//
// Created by Kenneth-Matthew Velarde on 2019-03-10.
//
#include<cstdlib> //rand and srand
#include<ctime> //time fxn

#include "Die.h"
using namespace std;

//constructor
Die::Die(int numsides){


    unsigned seed  = time(0);
    srand(seed);
    sides = numsides;
    roll();
} // end constructor

void Die::roll(){

    const int MIN_VALUE = 1; // constant for min die value
    value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE; // get rand value for die
} //end roll

int Die::getSides() {

    return sides;
} // end getSides

int Die::getValues() {

    return value;
} // end getValues

