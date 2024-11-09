// Write a Program to print the below Full Pyramid pattern using nested for loop.
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1


#include<stdio.h>
int main(){

    for (int row = 1; row <= 5; row++)

    {
        for (int space = 4; space >= row; space--)
        {
            printf("- ");
        }
        for (int col = 1; col < row; col++)
        {
            printf("%d ",col);

        }

        for (int col = row; col >= 1; col--)
        {
            printf("%d ",col);

        }
        for (int space = 4; space >= row; space--)
        {
            printf("- ");
        }
        printf("\n");
    }
    
}