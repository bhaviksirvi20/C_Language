#include <stdio.h>

int main()
{

    int size;

    printf("enter value : ");
    scanf("%d", &size);

    int variable[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter the value : ");
        scanf("%d", &variable[i]);
    }
    printf("-----------------------------\n");
    
    for (int i = 0; i < size; i++)
    {
        printf("value : %d \n", variable[i]);
    }
}