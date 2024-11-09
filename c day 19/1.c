#include <stdio.h>

int main(){
    int user;

    printf("Enter the size : ");
    scanf("%d",&user);

    int box[user];
    for (int i = 0; i < user; i++)
    {
        printf("box[%d] : ",i);
        scanf("%d:",&box[i]);
    }
    printf("Negative elements from an Array: ");
    for (int i = 0; i < user; i++)
    {
         if (box[i] < 0)
         {
            printf("%d ",box[i]);
         }
         
    }
   
}
