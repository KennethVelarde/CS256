//
// Created by Kenneth-Matthew Velarde on 2019-05-04.
//
#include <iostream>
#include "midtermprob3.h"
#include <climits>

floArray::floArray(int arrsize) {

    arr = new float[arrsize];
    for (int i = 0; i < arrsize; i++) {
        arr[i] = 0;
    }
}

floArray::~floArray() {

    delete[] arr;
    arr = NULL;

}


void floArray::store(int index, float element) {
    //stores an element at a specific position
    arr[index] = element;

    //determine highest and lowest elements and store
    if(element < lowestVal){
        lowestVal = element;
    }
    if(element > highestVal){
        highestVal = element;
    }
}

float floArray::retrieve(int index) {
    return arr[index];
}

float floArray::returnLowest() {
    return lowestVal;

}

float floArray::returnHighest(){
    return highestVal;
}












