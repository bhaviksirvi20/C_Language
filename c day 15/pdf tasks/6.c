// Write a Program to print the below Inverted Left Half Pyramid pattern using nested for
// loop.
// 5 4 3 2 1
// - 5 4 3 2
// - - 5 4 3
// - - - 5 4
// - - - - 5

#include <stdio.h>

int main()
{

    for (int row = 1; row <= 5; row++)
    {

        for (int space = row; space >= 2; space--)
        {
            printf("- ");
        }

        for (int col = 5; col >= row; col--)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}
