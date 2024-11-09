// Write a Program to print the below pattern using nested for loop.
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


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
            printf("- ");
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
            printf("- ");
        }
        printf("\n");
    }
}