#include <iostream>

#include"floatingarray.h"


using namespace std;

int main() {

    floatingarray ar = floatingarray(5);
   int temp1 =  ar.getHigh();
   int temp2 =  ar.getLow();
   int temp3 = ar.storeNum(5,3);
   int temp4 = ar.getNum(3);
cout << temp1 << endl;
cout << temp2 << endl;
    cout << temp3 << endl;
    cout << temp4 << endl;

return 0;
}