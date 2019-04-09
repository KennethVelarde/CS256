////
//// Created by Kenneth-Matthew Velarde on 2019-04-08.
////
//
//#include<iostream>
//
//
////Min template
//template <class T>
//
//T Min(T n1, T n2){
//    if(n1 < n2){
//        return n1;
//    }
//    else{
//        return n2;
//    }
//}// end Min
//
//template <class T2>
//T2 Max(T2 n3, T2 n4){
//    if(n3 > n4){
//        return n3;
//    }
//    else{
//        return n4;
//    }
//}// end Max
//
//int main(){
//
//    int num1, num2;
//    num1 = 2;
//    num2 = 4;
//
//    double dub1, dub2;
//    dub1 = 2.5;
//    dub2 = 4.5;
//
//    std::string s1, s2;
//    s1 = "Hello";
//    s2 = "Worlds";
//
////min/max of int
//    std::cout << "Minimum: " << Min(num1,num2) << std::endl;
//    std::cout << "Maximum: " << Max(num1,num2) << std::endl;
//    std::cout<< "\n";
//
////min/max of double
//    std::cout << "Minimum: " << Min(dub1,dub2) << std::endl;
//    std::cout << "Maximum: " << Max(dub1,dub2) << std::endl;
//
////min/max of string
//    std::cout << "Minimum: " << Min(s1,s2) << std::endl;
//    std::cout << "Maximum: " << Max(s1,s2) << std::endl;
//
//
//    return 0;
//}