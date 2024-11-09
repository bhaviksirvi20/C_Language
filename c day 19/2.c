#include <stdio.h>
int main(){
    int rowsize , colsize ,large;

    printf("Enter Row Size : ");
    scanf("%d",&rowsize);

    printf("Enter Col Size : ");
    scanf("%d",&colsize);

    int box[rowsize][colsize];

    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
          printf("box[%d][%d] : ",row,col);
          scanf("%d",&box[row][col]);
        }
    }
    for (int row = 0; row < rowsize; row++)
    {
        for (int col = 0; col < colsize; col++)
        {
          if (large < box[row][col])
          {
            large = box[row][col];
          }
        }
          printf("\n");
    }
          printf("Largest Number is :%d",large);   
}