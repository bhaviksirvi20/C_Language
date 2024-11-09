// Write a Program to print the below Floyd’s Triangle pattern using nested for loop.
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <stdio.h>

int main() {
    int new = 1;
    for(int start = 1 ; start <= 5; start++)
    {
        for(int end = start ; end >= 1 ; end--)
        {
            printf("%d ",new);
            new++;
        }
        printf("\n");
    }
}