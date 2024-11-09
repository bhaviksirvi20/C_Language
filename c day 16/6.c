// Q.6 Develop a program that prints the given Custom numeric pattern using a nested for loop.
// // 1 - - - - - - - - 1
// // 1 2 - - - - - - 2 1
// // 1 2 3 - - - - 3 2 1
// // 1 2 3 4 - - 4 3 2 1
// // 1 2 3 4 5 5 4 3 2 1
#include <stdio.h>

int main() {
    
    for (int row = 1; row <= 5 ;row++)
        {
            for (int col = 1; col <= row ;col++)
            {
              printf("%d ",col);
            }
            
             for(int spece = row; spece <= 4 ; spece++){
                printf("--- ");
            }
            for (int col = row; col >= 1 ;col--)
            {
              printf("%d ",col);
            }
        printf("\n");
    }
}