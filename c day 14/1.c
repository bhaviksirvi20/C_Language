// Write a Program to print the below Right Half Pyramid pattern using nested for loop.
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

#include <stdio.h>

int main() {
   
    for(int start = 1 ; start <= 5; start++)
    {
        for(int end = start ; end >= 1 ; end--)
        {
            printf("%d ",end);
        }
        printf("\n");
    }
}