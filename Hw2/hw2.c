/*
 * hw2.c
 *
 *  Created on: Feb 5, 2019
 *      Author: kenneth-matthewvelarde
 */

#include<stdio.h>

int main(){

/////////////////////#4
	printf(" #4\n");

	double bill = 88.67;
	double tax = bill * (.0675);
	double tip = (bill + tax) * .20;

	double total = bill + tax + tip;

	printf("Meal Cost: $%.2f\n", bill);
	printf("Tax: $%.4f\n", tax);
	printf("Tip: $%f\n", tip);

	printf("Total bill: $%f \n", total);
	printf("\n");

/////////////////////#7
	printf(" #7\n");

	double oceanInitial = 1.5;
	double fiveYears, sevenYears, tenYears;
	fiveYears = (oceanInitial * 5) - oceanInitial;
	sevenYears = (oceanInitial * 7) - oceanInitial;
	tenYears = (oceanInitial * 10) - oceanInitial;

	printf("After five years the ocean level higher by: %.2f mm. \n", fiveYears);
	printf("After seven years the ocean level higher by: %.2f mm. \n", sevenYears);
	printf("After ten years the ocean level higher by: %.2f mm. \n", tenYears);
	printf("\n");

/////////////////////#23 Ch.3
	printf(" #23 Ch.3 \n");

	double shares, stockBought, comissionBought, stockSold, comissionSold, profit;
	shares = 1000;
	stockBought = 45.50 * shares;
	comissionBought = stockBought * .02;
	stockSold = shares * 56.90;
	comissionSold = stockSold * .02;
	profit = (stockSold - stockBought) - (comissionBought + comissionSold);

	printf("Joe paid $%.2f for the stocks \n", stockBought);
	printf("Joe paid his brokers $%.2f when he bought the stocks\n", comissionBought);
	printf("Joe sold his stocks for $%.2f\n", stockSold);
	printf("Joe paid his broker $%.2f when he sold the stocks\n", comissionSold);
	printf("Joe's total profit is: $%.2f\n",profit);

	printf("\n");
	/////////////////////#23 Ch.5
	printf(" #23 Ch. 5\n");

	printf("\n");
int row, col, count;

count = 1;
row = 10;
col = 10;


	printf(" PATTERN A \n");
for(int i = 0; i < row; i++){
	for(int j = 0; j<= i; j++){
		printf("*");
	}
	count++;
	printf("\n");
}


printf("\n");
printf(" PATTERN B \n");
for(int i = 0; i < col; i++){
	for(int j = 10; j> i; j--){
	printf("*");
}
count++;
printf("\n");
}


return 0;
	}
