#include<stdio.h>
int main(){
    int x;
    printf("Put your number ");
    scanf("%d",&x);
    if(x%5==0) printf("The number is divisible by 5");
    if(x%5!=0) printf("The number is not divisible by 5");

    printf("\nPut your number again");
    scanf("%d",&x);
    if(x%5==0) printf("The number is divisible by 5");
   else
   printf("The number is not divible by divisible ");

     printf("\nPut your number again");
    scanf("%d",&x);
    if(x%5==0) printf("The number is divisible by 5");
    if(x%5!=0) printf("The number is not divisible by 5");

     printf("\nPut your number again");
    scanf("%d",&x);
    if(x%5==0) printf("The number is divisible by 5");
    if(x%5!=0) printf("The number is not divisible by 5");
    
    return 0;
    
}