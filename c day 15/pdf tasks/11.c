// Write a Program to print the below Full Pyramid pattern using nested for loop.
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

#include <stdio.h>
int main()
{

    for (int row = 1; row <= 5; row++)

    {
        for (int space = 4; space >= row; space--)
        {
            printf("- ");
        }
        for (int col = 1; col < row; col++)
        {
            printf("* ", col);
        }

        for (int col = row; col >= 1; col--)
        {
            printf("* ", col);
        }
        for (int space = 4; space >= row; space--)
        {
            printf("- ");
        }
        printf("\n");
    }
}