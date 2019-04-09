//
// Created by Kenneth-Matthew Velarde on 2019-04-07.
//

//#include <iostream>
//
//#include <string>
//
////using namespace std;
//
// 
//
////T is a generic type that will be defined later
//
//template <typename T>       //we could have more then 1 typename so the letter T is arbitray ex: ,typename X
//
//T maxof(const T & a, const T & b) {
//
//    return (a > b ? a : b);         //ternary operator
//
//}
//
// 
//
//int main() {
//
//    int a = 7;
//
//    int b = 9;
//
//    //must define T,template parameter, it is set to int in this case
//
//    std::cout << "max is " << maxof<int>(a, b) << std::endl;
//
//    std::string c = "seven";
//
//    std::string d = "nine";
//
////Note it will compares the string because string class has overloaded operator ">"
//
//    std::cout << "max is " << maxof<std::string>(c, d) << std::endl;
//
//
//    return 0;
//
//}
//
//
////HOW IT WORKS COMPILER WILL GENERATE a specialization when it is called. Happens at compile time!
//
////Only the type specified in line 20 will be generated
//
//int maxof(const int & a, const int & b) {
//    return (a > b ? a : b);         //ternary operator
//}
//
//
////try adding a new type string.
