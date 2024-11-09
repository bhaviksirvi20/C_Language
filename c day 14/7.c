// Write a Program to print the below Right Half Pyramid pattern using nested for loop.
// A
// B A
// C B A
// D C B A
// E D C B A

#include <stdio.h>

int main() {
   
    for(char start = 'A' ; start <= 'E'; start++)
    {
        for(char end = start ; end >= 'A' ; end--)
        {
            printf("%c ",end);
            
        }
        printf("\n");
    }
}