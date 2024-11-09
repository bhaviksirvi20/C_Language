// Q.3 Develop a program that prints the given Left half triangle pattern using a nested for loop.
// - - - - 5
// - - - 4 5
// - - 3 4 5
// - 2 3 4 5
// 1 2 3 4 5

#include <stdio.h>

int main() {

    
    for (int row = 5; row >= 1 ;row-- )
        {
            for(int spece = 2; spece <= row ; spece++){
                printf("- ");
            }
            
            for (int col = row; col <= 5 ;col++ )
                {
                printf("%d ",col);
               
            }
        printf("\n");
    }
}