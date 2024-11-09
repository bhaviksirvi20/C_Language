#include<stdio.h>

int main(){

    int size;
    float sum;

    printf("enter the value => ");
    scanf("%d",&size);

    printf("-------------------------------------\n");

    int box[size];

    for (int i = 0; i < size; i++)
    {
        
        printf("enter the value box[ %d ] = ",i);
        scanf("%d",&box[i]);
        sum = sum + box[i];
        
    }
        printf("-------------\n");
    
    printf("%.2f\n",sum/size );
    
    printf("-------------\n");
}