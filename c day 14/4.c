// Write a Program to print the below Inverted Right Half Pyramid pattern using nested
// for loop.
// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5

#include <stdio.h>

int main() {
   
    for(int start = 1 ; start <= 5; start++)
    {
        for(int end = start ; end <= 5 ; end++)
        {
            printf("%d ",end);
        }
        printf("\n");
    }
}