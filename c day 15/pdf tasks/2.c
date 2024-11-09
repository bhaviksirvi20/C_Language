// Write a Program to print the below Left Half Pyramid pattern using nested for loop.
// - - - - 5
// - - - 4 5
// - - 3 4 5
// - 2 3 4 5
// 1 2 3 4 5


#include <stdio.h>

int main()
{

    for (int row = 5; row >= 1; row--)
    {

        for (int space = row; space >= 2; space--)
        {
            printf("- ");
        }

        for (int col = row; col <= 5; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}