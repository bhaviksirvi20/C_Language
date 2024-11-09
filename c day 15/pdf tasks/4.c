// Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
// loop.
// 1 0 1 0 1
// - 0 1 0 1
// - - 1 0 1
// - - - 0 1
// - - - - 1

#include <stdio.h>

int main(){

    for (int row = 5; row >= 1; row--)
    {

        for (int space = row; space <= 4; space++)
        {
            printf("- ");
        }

        for (int col = row; col >= 1; col--)
        {
       

            if (col%2 == 0)
            {
                printf("0 ");
            }
         else{
                printf("1 ");
         }
        }
        printf("\n");
    }
}