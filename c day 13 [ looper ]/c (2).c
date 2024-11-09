// Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a
// do-while loop.

#include <stdio.h>

int main()
{
    char start = 'A', end = 'Z';
    do
    {
        if (start % 4 == 1)
        {
            printf("%c\n", start);
        }
        start++;
    } while (start <= end);
}