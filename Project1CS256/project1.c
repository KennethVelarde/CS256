/*
 * project1.c
 *
 *  Created on: Feb 23, 2019
 *      Author: kenneth-matthewvelarde
 */

#include <stdio.h>



int set_seats(char arr[][30], int prices[], int group_total, int profit){
	int row1;
	int col;
	while(group_total) {
		printf("What is the row and column of the seat being sold?");
		fflush(stdout);
		scanf("%d %d", &row1, &col);

		row1--;
		col--;

		if(arr[row1][col] == '*') {
			printf("That seat is already taken, choose another seat(s).\n");
		}else if((row1 >= 0 && row1 <= 15) && (col >= 0 && col <= 30)){ //input validation
			profit += prices[row1];

			arr[row1][col] = '*';

			group_total--;
		}else {
			printf("That's not a seat.\n");
		}
	}
	if(profit != 0) {
		printf("Those seat(s) will cost $%d\n", profit);
	}
	return profit;
}// end of set_seats


void printSeats(char arr[][30]) {
	for(int i = 0; i < 15; i++) {
		if(i<9) {
			printf("Row %d    ", i+1);
		}else {
			printf("Row %d   ", i+1);
		}
		for(int j = 0; j < 30; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}// end of printSeats

void available_seats(char seats[][30]) {
	int counter = 0;
	int total_counter = 0;

	for(int i = 0; i < 15; i++) {
		for(int j = 0; j < 30; j++) {
			if(seats[i][j] == '#') {
				counter++;
			}
		}
		printf("Row %d ", i+1);
		printf("has %d more seats available still.\n", counter);
		total_counter += counter;
		counter = 0;
	}
	printf("There are %d more seats available overall\n", total_counter);
}// end of available_seats


int printMenu(int overall_profit, int seats_sold_total, char seating[][30]) {
	int ticket_amount = 0;;
	int choice;
	printf("1. Purchase a ticket(s)\n"
			"2. Total ticket sales profit.\n"
			"3. Seats still currently available.");
	fflush(stdout);
	scanf("%d", &choice);
	if(choice == 1) {
		printf("How many tickets do you want to buy?");
		fflush(stdout);
		scanf("%d", &ticket_amount);
	}
	else if(choice == 2) {
		printf("The overall profit right now: $%d\n", overall_profit);
	}
	else if(choice == 3){
		printf("Total seats sold right now: %d\n", seats_sold_total);
		available_seats(seating);
	}
	return ticket_amount;
}

int main() {

	char seats[15][30];
	int row_price[15];

	int allSold = 1; //check if all seats sold/ tix still available
	int ticket_count = 0;  //total number of tix sold
	int profit = 0; //total profit

	int group_tickets;

	for(int i = 0; i < 15; i++) {
		for(int j = 0; j < 30; j++) {
			seats[i][j] = '#';
		}
	}// print seats

	for(int i = 0; i < 15; i++) {
		printf("What price is Row %d?", i+1);
		fflush(stdout);
		scanf("%d", &row_price[i]);

	}//inputs cost of rows
	while(allSold) {
		printSeats(seats);
		group_tickets = printMenu(profit, ticket_count,seats);

		profit += set_seats(seats,row_price,group_tickets, 0);

		ticket_count += group_tickets;
		if(ticket_count == 450) {
			allSold = 0;
		}
	}
	return 0;
}// end main
