// Q.2 Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.
// 11
// 12 13
// 14 15 16
// 17 18 19 20


#include <stdio.h>

int main() {

    int new = 11 ;
    for (int row = 1; row <= 4 ;row++ )
        {
            for (int col = row;col >= 1 ;col-- )
                {
                printf("%d ",new);
                new++;
            }
        printf("\n");
    }
}