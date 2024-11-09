// Write a Program to print the below Hallow Diamond look alike pattern using nested
// for loop.
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1
// 1                 1
// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1



#include <stdio.h>
int main()
{

    for (int row = 5; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }

        for (int spe = row; spe <= 4; spe++)
        {
            printf("--- ");
        }

        for (int col = row; col >= 1; col--)
        {
            printf("%d ", col);
        }

        printf("\n");
    }
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }

        for (int spe = row; spe <= 4; spe++)
        {
            printf("--- ");
        }

        for (int col = row; col >= 1; col--)
        {
            printf("%d ", col);
        }

        printf("\n");
    }
}