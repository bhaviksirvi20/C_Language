#include <stdio.h>

int main() {
    int rowsize, colsize;

    printf("Enter the number of rows: ");
    scanf("%d", &rowsize);
    printf("Enter the number of columns: ");
    scanf("%d", &colsize);

    int box[rowsize][colsize];

    for (int row = 0; row < rowsize; row++) {
        for (int col = 0; col < colsize; col++) {
            printf("box[%d][%d] = ", row, col);
            scanf("%d", &box[row][col]);
        }
    }

    int sum = 0;
    for (int row = 0; row < rowsize; row++) {
        for (int col = 0; col < colsize; col++) {
            printf("%d ", box[row][col]);
            sum += box[row][col];  
        }
        printf("\n");
    }

    float average = (float)sum / (rowsize * colsize);
    printf("Average = %.2f\n", average);

 }