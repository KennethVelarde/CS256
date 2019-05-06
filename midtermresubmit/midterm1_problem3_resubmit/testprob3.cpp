//
// Created by Kenneth-Matthew Velarde on 2019-05-04.
//
#include "midtermprob3.h"
#include <iostream>
using namespace std;
int main(){

    floArray tester(5);


    tester.store(0,0);
    tester.store(1,2.5);
    tester.store(2,200);
    tester.store(3,50);
    tester.store(4,12);



    std::cout << "the highest value is: "<< tester.returnHighest() << std::endl;

    cout << "the lowest value is: " << tester.returnLowest() << endl;

    for (int i = 0; i < 5; i++) {
        std::cout << "Array at index " << i << " is " << tester.retrieve(i) << std::endl;
    }



    return 0;
}

