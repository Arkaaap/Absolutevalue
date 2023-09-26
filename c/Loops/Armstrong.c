#include<stdio.h>
#include <math.h>
int main (){
    int n,store,arm=0,rem;

    printf("Enetr the the number to check armstrong or not :");
    scanf("%d",&n);
    store=n;
    while (n!=0){
        rem=n%10;
        arm=("rem*rem*rem*")+arm;
        n=n/10;

    }
    if (store==arm){
        printf("Armstrong number ");
    }
    
    else  
        printf("not an armstrong number ");
    
}