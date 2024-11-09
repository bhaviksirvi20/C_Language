// Write a Program to print the below Inverted Right Half Pyramid pattern using nested
// for loop.
// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1

#include <stdio.h>

int main() {
   
    for(int start = 5 ; start >= 1; start--)
    {
        for(int end = 1 ; end <= start ; end++)
        {
            if(end%2 == 0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
}