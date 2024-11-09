#include <stdio.h>

int main() {
    int rows, cols, rowsum = 0, colsum = 0;
    
    printf("Enter the row size: ");
    scanf("%d", &rows);

    printf("Enter the column size: ");
    scanf("%d", &cols);
    
    int box1[rows][cols];
    
    printf("Enter Elements:\n");

    for (int r1 = 0; r1 < rows; r1++) 
    {
        for (int c1 = 0; c1 < cols; c1++) {
            printf("a[%d][%d] = ", r1, c1);
            scanf("%d", &box1[r1][c1]);
        }
    }
    
    int rowi;
    printf("Enter row number: ");
    scanf("%d", &rowi);
    
    if (rowi >= 0 && rowi < rows) {
        printf("Row %d: ", rowi);
        for (int c1 = 0; c1 < cols; c1++) {
            printf("%d ", box1[rowi][c1]);
            rowsum += box1[rowi][c1];
        }
        printf("\nThe sum of row %d: %d\n", rowi, rowsum);
    } else {
        printf("Invalid row number!\n");
    }

    int coli;
    printf("Enter column number: ");
    scanf("%d", &coli);
    
    if (coli >= 0 && coli < cols) {
        printf("Column %d: ", coli);
        for (int r1 = 0; r1 < rows; r1++) {
            printf("%d ", box1[r1][coli]);
            colsum += box1[r1][coli];
        }
        printf("\nThe sum of column %d: %d\n", coli, colsum);
    } else {
        printf("Invalid column number!\n");
    }

}