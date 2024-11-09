#include <stdio.h>
int main() {
    int B = 240;
    int S = 20;
    
    // Perform operations
    int Addition = B + S;
    int Subtraction = B - S;
    int Multiplication = B * S;
    int Division = B / S;
    int Modulo = B % S;
    
    // Print results
    printf("%d + %d = %d\n", B, S, Addition);
    printf("%d - %d = %d\n", B, S, Subtraction);
    printf("%d * %d = %d\n", B, S, Multiplication);
    printf("%d / %d = %d\n", B, S, Division);
    printf("%d /- %d = %d\n", B, S, Modulo);
    
}