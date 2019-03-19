//
// Created by Kenneth-Matthew Velarde on 2019-03-16.
//

#include "Date.h"
#include "Pharmacy.h"
#include "PatientAccount.h"
#include "Surgery.h"
#include <iostream>

using namespace std;


    int main() {

//date class modification
        Date test(12,10,2014);
        Date test2(12, 18, 2014);
    cout<< "December 18 2014 - December 10, 2014" << endl;
        int total = test2 - test;
    cout << total << endl;


        Date test4(1,1,1);

//takes user -inputted date and prints it
    cout<< "--user- inputted date--" << endl;
    cin >> test4;
    cout << test4 << endl;

//increments day by 1;
    cout<< "--increments--" << endl;
    ++test4;
    cout << test4 << endl;

//decrements day by 1( back to original now)
cout<< "--decrements--" << endl;
    --test4;
    cout << test4 << endl;




    //original challenge 1 ch 13
//        test.printDateNum1();
//        test.printDateNum2();
//        test.printDateNum3();

//Patient fees

cout << " --Patient Fees -- \n";

        string meds = " ";
        string surgery = " ";
        int days_spent = 0;

        cout<< "How many days did the patient stay?\n";
        cin >> days_spent;

        PatientAccount test_account = PatientAccount(days_spent);
        Pharmacy test_pharmacy = Pharmacy();
        Surgery test_surgery = Surgery();

        cout << "What surgery was operated on the patient? \n";
        cin >> surgery;

        test_surgery.addCharges(test_account, surgery);

        cout<< "What medicine was prescribed? \n";
        cin >> meds;
        test_pharmacy.addToTotal(test_account, meds);

        cout << "At checkout, the patient's total is: ";
        cout << test_account.checkOut();


        return 0;
    }