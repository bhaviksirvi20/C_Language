#include<stdio.h>

int main(){

    int rowsize,colsize;

    printf("enter the value of number :");
    scanf("%d",&rowsize);
    printf("enter the value of number :");
    scanf("%d",&colsize);

    int box[rowsize][colsize];

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            printf("box[%d][%d] = ",row , col);
            scanf("%d",&box[row][col]);
        }
        
        
    }
    printf("------------------------------------------");

    int box1[rowsize][colsize];

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            printf("box[%d][%d] = ",row , col);
            scanf("%d ",&box1[row][col]);
        }
        
        
    }

    int box3[rowsize][colsize];
    for (int row  = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
            box3[row][col] = box[row][col] +  box1[row][col];
            printf("%d ",box3[row][col]);
        }
        printf("\n");
        
    }

}