// Write a Program to print the below Right Half Pyramid pattern using nested for loop.
// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

#include <stdio.h>

int main() {
   
    for(int start = 5 ; start >= 1; start--)
    {
        for(int end = start ; end <= 5 ; end++)
        {
            printf("%d ",start);
        }
        printf("\n");
    }
}