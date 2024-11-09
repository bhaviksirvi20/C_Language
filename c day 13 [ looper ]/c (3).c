// Develop a Program to count the total number of digits in a number.
// Example:
// Input: Enter any number: 752
// Output: Total number of digits: 3

#include <stdio.h>

int main()
{

    int user, start = 0;

    printf("enter the value => ");
    scanf("%d", &user);

    while (user != 0)
    {
        user = user / 10;
        start++;
    }

    printf("total number => %d\n", start);
}