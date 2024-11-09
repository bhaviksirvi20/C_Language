#include <stdio.h>

int main()
{

    for (int row = 1; row <= 5; row++)
    {
        for (int col = row; col >= 1; col--)
        {
            printf("%d ", row);
        }
        printf("\n");
    }
}