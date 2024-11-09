// Q.1 Develop a program that prints the given Right half triangle pattern using a nested for loop.
// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45

#include<stdio.h>

int main() {

    for (int row = 41;row <= 45 ;row++ )
        {
       for (int col = 41; col <= row ;col++ )
           {
           printf("%d ",col);
       }       
            printf("\n");
    }

    
}