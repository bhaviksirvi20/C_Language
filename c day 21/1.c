#include <stdio.h>
int array()
{
    int user;

    printf("Enter the Size : ");
    scanf("%d", &user);

    int box[user];
    for (int i = 0; i < user; i++)
    {
        printf("box[%d] = ", i);
        scanf("%d", &box[i]);
    }
    int sum = 0;

    for (int i = 0; i < user; i++)
    {
        sum += box[i];
    }
    printf("sum = %d ", sum);
}

int main()
{
    array();
}