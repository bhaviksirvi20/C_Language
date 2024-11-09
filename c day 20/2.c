#include <stdio.h>
int cube( ){
    int box ;
    
    printf("enter the value : ");
    scanf("%d",&box);
    
     if(box % 3 == 0 && box % 5 == 0){
        printf("The given number is divisible by both 3 & 5. \n");
    }
    else{
        printf("The given number is not divisible by both 3 & 5. \n");
    }
}
int main() {
   
    cube();
   
}