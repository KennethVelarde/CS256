/*
 * hw3.c
 *
 *  Created on: Feb 17, 2019
 *      Author: kenneth-matthewvelarde
 */



#include<stdio.h>
#include<stdlib.h>

//////////#10
int *revArray(int arr[], int size)
{
	int copy[5];
	int *newArray = copy;
	printf("Reverse:");
	for (int i = 0; i < size; ++i)
    {
        //int temp = arr[i];
        copy[i] = arr[size - (i + 1)];
        //printf("this %d\n", arr[size - (i + 1)]);
        //printf("that%d\n", temp);
        //arr[size - (i +1)] = temp;

        printf("%d", copy[i]);
    }
	return newArray;
}// end revArray

///////////#16
	   		int newPopulation(){


	   		   printf("Enter starting pop. size, annual birth rate, annual death rate, and number of years: \n");
	   		   		   int popStart, abr, adr, years;
	   		   		   fflush(stdout);
	   		   		   scanf(" %d", &popStart);
	   		   		   		  	scanf("%d",&abr);
	   		   		   		  	scanf("%d",&adr);
	   		   		   			scanf("%d",&years);
	   		   		    if(popStart < 2 || abr < 0 || adr < 0 || years < 1){
	   		   		   	   		   			newPopulation();
	   		   		   	}// end if
	   		   		    else{
	   		   		   for(int i = 0; i < years; i++){
	   		   			  int newPop = popStart + abr - adr;
	   		   			  printf("Start pop: %d New pop: %d\n", popStart, newPop);
	   		   			  popStart = newPop;

	   		   		   	   	   } // end for
	   		   		    }// end else
	   	}//newPopulation
	   		///////////#18
	   		void printBoard(char board[][3]){
	   			//board[3][3] = b;
	   		   	for(int a = 0; a < 3; a++){
	   		  for(int b = 0; b < 3; b++){
	   		  		   			printf("%c", board[a][b]);
	   		  		   		}//end for a
	   		  		   printf("\n");
	   		   	}// end for b


	   		}//end printBoard

	   			   	int ticTacToe(){
	   			   		int won = 0;
	   			   		int x,y;
	   			   		char board[3][3];
	   			   		//print board
	   			   		for(int a = 0; a < 3; a++){
	   			   			for(int b = 0; b < 3; b++){
	   			   				   			board[a][b] = '*';
	   			   				   			printf("%c",board[a][b]);
	   			   				   		}//end for a
	   			   			printf("\n");
	   			   			}// end for b
	   			   		//print board initial

	   			   		//play game
	   			   		while(won == 0){
	   			   			if(won == 1){
	   			   				printf(" \n Player 1.You win!\n");
	   			   			}// p1 won
	   			   				else if(won == 2){
	   			   				printf(" \n Player 2.You win!\n");
	   			   				} // p2 won
	   			   					else if(won == 3){
	   			   						printf(" draw.\n");
	   			   						} // draw

	   			   			else{

	   			   		printf("enter row and col for where to place x: ");
	   			   		fflush(stdout);
	   			   		scanf("%d %d",&x,&y);
	   			   		board[x][y] = 'x';
	   			   		printBoard(board);
	   			   		printf("enter row and col for where to place o: ");
	   			   			   		fflush(stdout);
	   			   			   		scanf("%d %d",&x,&y);
	   			   			   		board[x][y] = 'o';
	   			   		printBoard(board);

	   			   			}// end else
	   			   		if(board[0][0] = 'x' && board[0][1] == board[0][0] && board[0][2] == board[0][0]){
	   			   			printf("\nYou win.");
	   			   		} // end of if
	   			   			else if((board[0][0] = 'x' || 'o') && board[1][1] == board[0][0] && board[0][2] == board[1][1]){
	   			   		   	printf("\nYou win.");
	   			   		}// else if

	   			   		}//end of while





	   			   	}//end of ticTacToe method

int main(){

/////#23

	int i;
	double p = 3.14159;
	double radius, areaOfCircle, areaOfRect, areaOfTri, length, trilen, tribase, width,height;

	printf("Geometry Calculator\n");
	printf("1. the Area of a Circle\n");
	printf("2. the Area of a Rectangle\n");
	printf("3. the Area of a Triangle\n");
	printf("4. Quit\n");

	 fflush(stdout);
	 scanf("%d", &i);

	   switch(i){

	   case 1:
		   printf("Radius of circle:");
		   fflush(stdout);
		   scanf("%lf ", &radius);
		   if(radius< 0){
		   	   			 printf("radius of circle:\n");
		   	   				   		   fflush(stdout);
		   	   				   		   scanf("%lf %lf", &length,&width);
		   }
		   areaOfCircle =(p) * (radius*radius);
		   printf("area of Circle: %f\n", areaOfCircle);
		   break;

	   case 2:
	   		   printf("length and width of rectangle:\n");
	   		   fflush(stdout);
	   		   scanf("%lf %lf", &length,&width);
	   		   if(length < 0 || width < 0){
	   			 printf("length and width of rectangle:\n");
	   				   		   fflush(stdout);
	   				   		   scanf("%lf %lf", &length,&width);
	   		   	   	   	   	   	   	   	   }
	   		   areaOfRect = length * width;
	   		printf("area of Rect: %f\n", areaOfRect);
	   		   break;

	   case 3:
		   printf("length of triangle base and height:\n");
		   fflush(stdout);
		   scanf("%lf %lf", &tribase,&trilen);
		   if(tribase < 0 || trilen < 0){
		   	   			 printf("length and width of rectangle:\n");
		   	   				   		   fflush(stdout);
		   	   				   		   scanf("%lf %lf", &length,&width);
		   	   	   	   	   	   	   	   	   }
		   	   		   areaOfTri = (tribase * trilen) * .5;
		   	   		printf("area of Triangle: %f\n", areaOfTri);
		   	   		   break;
	   case 4:
		   break;
	   default:
		   printf("not a correct menu choice, Choose another option.");
			 fflush(stdout);
			 scanf("%d", &i);
			 break;

		   }//switch
	   printf("\n");
	   printf("\n");
	   newPopulation();
	   printf("\n");
	   printf("\n");

	   printf("Initial:");
	   	   int n = 5;
	   	   int arr[5] = {5,4,3,2,1};
	   	   for(int l = 0; l < n; l++){
	   		   printf("%d", arr[l]);
	   	   }
	   	   printf("\n");
	   	   revArray(arr,5);
	   	 printf("\n");
	   	 printf("\n");
	   	   ticTacToe();
				   return 0;
	   		   }// main
