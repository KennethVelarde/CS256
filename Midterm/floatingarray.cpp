//
// Created by Kenneth-Matthew Velarde on 2019-03-12.
//
#include "floatingarray.h"

#include "iostream"

using namespace std;

float arr[5];

floatingarray::floatingarray(int asize) {
    size = asize;
arr[5] = arr[size];
}

int floatingarray::storeNum(int numstore, int spot) {
   return arr[spot] = numstore;

}
int floatingarray::getNum(int numb) {
    return arr[numb];

}



int floatingarray::getHigh() {

    return arr[size];
}
int floatingarray::getLow() {

    return arr[0];
}

