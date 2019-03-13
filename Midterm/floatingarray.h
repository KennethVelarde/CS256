//
// Created by Kenneth-Matthew Velarde on 2019-03-12.
//

#ifndef MIDTERM_FLOATINGARRAY_H
#define MIDTERM_FLOATINGARRAY_H


class floatingarray{
private:
    int size;
    float arr[];


public:
    floatingarray(int);
//    ~floatingarray();

    int storeNum(int,int);
    int getNum(int);
    int getHigh();
    int getLow();


};

#endif //MIDTERM_FLOATINGARRAY_H
