/*
 * midtermSubmit.c
 *
 *  Created on: Mar 12, 2019
 *      Author: kenneth-matthewvelarde
 */

#include<stdio.h>
int main(){

	int size;
	int count1 = 1;
	int count2 = 1;
	int tot = 0;
	int countert = 1;
	int counters = 1;


	printf("What is the row/column that you wish to solve to: ");
	fflush(stdout);
	scanf("%d ",&size);

	printf("  ");// 3 spaces
	for(int top = 1; top < size+1; top++){
	printf(" %d ", countert);
	countert++;
	} // end top row
	printf("\n +---------------------------------------");

//		for(int top = 1; top < size+1; top++){
//			printf("%d|\n", counters);
//			counters++;
//			} // end side row
//
//
//
	printf("\n");


		for(int i = 1; i < size+1; i++){
			printf("%d ",i);
			for(int j = 1; j< size+1; j++){
				tot = count1*count2;
//				printf(" ");
				printf(" %d ",tot);

				count2++;
			}//end j
//			printf(" ");
			printf("\n",tot);
			count1++;
			count2 = 1;

		}// end i










	return 0;

}// end main
