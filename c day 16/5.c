// Q.5 Develop a program that prints the given Full Pyramid pattern using a nested for loop.
// - - - - 5 - - - -
// - - - 4 5 4 - - -
// - - 3 4 5 4 3 - -
// - 2 3 4 5 4 3 2 -
// 1 2 3 4 5 4 3 2 1


#include <stdio.h>

int main() {
    
    for (int row = 5; row >= 1 ;row--)
        {
            for(int spece = 2; spece <= row ; spece++){
                printf("- ");
            }
            
            for (int col = row; col <= 5 ;col++)
            {
              printf("%d ",col);
            }
            
            for (int col = 4; col >= row ;col--)
            {
              printf("%d ",col);
            }
             for(int spece = 2; spece <= row ; spece++){
                printf("- ");
            }
        printf("\n");
    }
}