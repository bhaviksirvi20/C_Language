// Write a Program to print the below Right Half Pyramid pattern using nested for loop.
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5

#include <stdio.h>

int main() {
   
    for(int start = 5 ; start >= 1; start--)
    {
        for(int end = start ; end <= 5 ; end++)
        {
            printf("%d ",end);
        }
        printf("\n");
    }
}