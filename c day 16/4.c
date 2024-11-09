// Q.4 Develop a program that prints the given Inverted Left half triangle pattern using a nested for
// loop.
// 1 0 1 0 1
// - 1 0 1 0
// - - 1 0 1
// - - - 1 0
// - - - - 1


#include <stdio.h>

int main() {
    
    for (int row = 5; row >= 1 ;row--)
        {
            for(int spece = row; spece <= 4 ; spece++){
                printf("- ");
            }
            
            for (int col = 1; col <= row ;col++)
            {
                if (col%2 == 1) {
                printf("1 ");
                } else {
                printf("0 ");
                }
            }
        printf("\n");
    }
}