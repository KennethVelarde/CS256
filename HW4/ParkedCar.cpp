//
// Created by Kenneth-Matthew Velarde on 2019-03-11.
//

#include<iostream>
#include "ParkedCar.h"

using namespace std;

ParkedCar::ParkedCar(string cMake, string cModel, string cColor, int cPlate, int minutes) {
    make = cMake;
    model = cModel;
    color = cColor;
    plate = cPlate;
    minParked = minutes;

}

ParkedCar::~ParkedCar(){

}

string ParkedCar::getMake(){

    return make;
}
string ParkedCar::getModel(){

    return model;
}
string ParkedCar::getColor(){

    return color;
}
int ParkedCar::getPlate(){

    return plate;
}
int ParkedCar::getminParked(){

    return minParked;
}



