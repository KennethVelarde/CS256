////
//// Created by Kenneth-Matthew Velarde on 2019-04-08.
////
//
//#include<iostream>
//#include "ProductionWorker.h"
//#include "Employee.h"
//
//
//
//int main() {
//
//    std::cout << "--Employee Exception--\n";
//    std::cout << "Employee Number set to 100000 for test.\n";
//    Employee Ken;
//    try {
//        Ken.setName("Ken");
//        Ken.setHireDate("12/12/19");
//        Ken.setNumber(100000);
//
//    }
//    catch (Employee::InvalidEmployeeNumber) {
//
//        std::cout << "\nError: Employee Number above 9999 or below 0.\n";
//    }
//
////    std::cout<<"\n"<< Ken.getName() << "\n";
////    std::cout<<"\n"<< Ken.getNumber() << "\n";
////    std::cout<< Ken.getHireDate() << "\n";
//
//
//
//
//    std::cout << "\n--ProductionWorker Exceptions--\n" << std::endl;
//    std::cout << "Shift set to 3(a non 0 or 1 number) for test.\n";
//    std::cout << "Pay rate set to (-9.2) negative double for test.\n";
////    //day shift = 1
////    //night shift = 2
//
////    ProductionWorker Ken2("Kenneth", 11, "12/12/19",1,15.5);
//
//    ProductionWorker Ken2;
//
//
//    try {
//        Ken2.setShift(3);
//    }catch (ProductionWorker::InvalidShift) {
//            std::cout << "\nError: Not a day or night shift.\n";
//        }
//    try {
//        Ken2.setPayRate(-9.2);
//    }catch (ProductionWorker::InvalidPayRate) {
//        std::cout << "Error: Cannot have a negative pay rate.\n";
//    }
//
////    std::cout << "\n";
////
////    std::cout << Ken2.getName() << "\n";
////    std::cout << Ken2.getNumber() << "\n";
////    std::cout << Ken2.getHireDate() << "\n";
////    std::cout << Ken2.getShift() << "\n";
////    std::cout << Ken2.getPayRate() << "\n";
////
////    std::cout << "Hello World\n";
//    return 0;
//
//}