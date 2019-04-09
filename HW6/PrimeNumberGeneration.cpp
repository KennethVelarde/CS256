//
// Created by Kenneth-Matthew Velarde on 2019-04-08.
//
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

void print(std::vector <int> const &a) {
    std::cout << "The vector elements are : ";

    for(int i=0; i < a.size(); i++)
        std::cout << a.at(i) << ' ';
}



void printName(int name)
{
    cout<<name<<"\n";
}


int main(){
    int input;

//    vector<int> primes;

    cout << "Enter an integer greater than 1: \n";
    cin >> input;

        vector<int> primeNums; //declaration of vector
        for (int i = 2; i < input; i++) {
            bool prime = true;
            for (int j = 0; j < primeNums.size() && primeNums[j] * primeNums[j] <= i; j++) {

                if (i % primeNums[j] == 0) {
                    prime = false;
                    break;
                }// proves not prime
            }
            if (prime) { //if number is prime, put in vector from back
                primeNums.push_back(i);
               // cout << i << " ";
            }
        }

std::for_each(primeNums.begin(),primeNums.end(),printName);

    return 0;
}// end main