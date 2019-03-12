#include <iostream>

#include "Die.h"

#include<iostream>
#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"
#include"PoliceOfficer.h"

using namespace std;

//fxns initialized

void playGame(string);
void gameWinner(int, int);

//variables declared;
string choice;



int main() {
    //#18
    cout<< "#18" << endl;
    cout <<"Do you want to play a game of 21? Enter 'y' or 'n': " << endl;
    cin >> choice;
    playGame(choice);

    cout << endl;

    //end of #18 //

    //#14

    cout<< "#14" << endl;

    //Police Officer information
    PoliceOfficer officer1 = PoliceOfficer("Kenneth", 818911);

    //Parking meter total minutes
    ParkingMeter meter = ParkingMeter(100);
    cout << "\nTickets issued by: " << officer1.getName() << " Badge number: " << officer1.getBadge() << endl;

    //the car currently parked
    ParkedCar car = ParkedCar("Toyota", "Camry", "Red", 123, 90);

    cout <<"Make: " << car.getMake() << endl;
    cout <<"Model: "<<car.getModel() << endl;
    cout <<"Color: "<<car.getColor() << endl;
    cout <<"Plate number:" <<car.getPlate() << endl;

    cout << "Minutes parked: " << car.getminParked() << endl;

    //check if parked car gets ticket or not
    officer1.giveTicket(car,meter,officer1);

    cout<< endl;

    //second car currently parked
    ParkedCar car2 = ParkedCar("Tesla", "3", "Blue", 411, 250);

    cout <<"Make: " << car2.getMake() << endl;
    cout <<"Model: "<<car2.getModel() << endl;
    cout <<"Color: "<<car2.getColor() << endl;
    cout <<"Plate number:" <<car2.getPlate() << endl;

    cout << "Minutes parked: " << car2.getminParked() << endl;

    //check if the secon car gets ticket or not
    officer1.giveTicket(car2,meter,officer1);
    //end of #14 //
    return 0;
}


//#18/////////////////////////
//game of 21//
void playGame(string play){

    int compScore = 0;
    int playerScore = 0;



    while(choice == "Y" || choice == "y"){

        //number of sides of die
        const int d1 = 6;
        //computer dice
        Die die1(d1);
        Die die2(d1);

        // player dice
        Die die3(d1);
        Die die4(d1);

        for (int count = 0; count < 2; count++) {

            // Roll the dice.

            // computer's rolls
            die1.roll();
            die2.roll();

            //player's rolls
            die3.roll();
            die4.roll();
        }

        //computer values
       die1.getValues();
       die2.getValues();
       // player's values
      cout << die3.getValues();
      cout << " " << die4.getValues() << endl;


        compScore += die1.getValues() + die2.getValues();
        playerScore += die3.getValues() + die4.getValues();

        cout<< "Current total: " << playerScore <<endl;

        if(choice == "N" || choice == "n"){
            //determine winner

            gameWinner(compScore,playerScore);

            cout << "computer score: " << compScore << endl;
            cout << "player score: " << playerScore << endl;

        } // end if
        //if either the computer or player total goes over 21, then game ends and winner is decided
        // if both go over 21, then both lose.
        if(playerScore > 21 || compScore > 21){
            choice = "N";

            gameWinner(compScore,playerScore);
            cout << "computer score: " << compScore << endl;
            cout << "player score: " << playerScore << endl;


        }

        else{
            cout << "Roll again? y or n :" << endl;
            cin >> choice;
        }
    } // end while


}//end playGame



//determines whether player or house(computer) won
void gameWinner(int houseScore, int playerScore){

    if(playerScore == 21) {
        cout << "You got 21! You win!" << endl;
    }
    else if((playerScore < 21) && (playerScore > houseScore)){
        cout << "You are closer to 21 than the house! You win!" << endl;
    }
    else if(houseScore > 21 && playerScore <= 21){
        cout << "You win!" << endl;
    }
    else if(playerScore > 21 && houseScore < 21){
        cout << "The house wins since you went over 21" << endl;
    }
    else if(playerScore > 21 && houseScore > 21){
        cout << "Both lose since both totals are over 21!" << endl;
    }
    else {
        cout << "The house wins!" << endl;
    }

}//end of gameWinner



