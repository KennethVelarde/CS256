#include <iostream>
//MIDTERM PROBLEM #1

int main() {
    int arraySize;

    // ask user for an array size
    printf(" Specify array size: ");
    fflush(stdout);
    scanf("%d" , &arraySize);

    //user-inputted array size taken in
    int array[arraySize][arraySize];

    printf("     "); // initial spacing for top row

    //alighment of row numbers
    for(int r = 1; r <= arraySize; r++)
    {

        if(r > 9)
        {
            printf("%d ", r);
        }
            else
            {
                printf("%d  ", r);
            }

    }

    printf("\n  +--"); // start of


    for(int i = 0; i < arraySize; i++)
    {
        printf("---"); // aligning
    }

    printf("\n");


    // for column number aligning
    for(int p = 1; p <= arraySize; p++)
    {

        if(p > 9)
        {
            printf("%d|  ",p);
        }else {
            printf(" %d|  ",p);
        }
        //
        for(int k = 1; k <= arraySize; k++) {

            array[p][k] = p * k;

            if(array[p][k] > 9) // fix spacing
            {
                printf("%d ",array[p][k]);
            }
                else
                {
                    printf("%d  ",array[p][k]);
                }

        }// end for

        printf("\n");

    }// end for

    return 0;
}