//
// Created by Kenneth-Matthew Velarde on 2019-05-04.
//

#ifndef MIDTERMRESUBMIT_MIDTERMPROB3_H
#define MIDTERMRESUBMIT_MIDTERMPROB3_H



class floArray{
private:
    float lowestVal;
    float highestVal;
    float *arr;
public:
    floArray(int); //constructor of class

    ~floArray(); // deconstructor


    void store(int index, float element); //store specified element at specified index
    float retrieve(int index); //get element at certain index


    float returnLowest();

    float returnHighest();

};

#endif //MIDTERMRESUBMIT_MIDTERMPROB3_H




