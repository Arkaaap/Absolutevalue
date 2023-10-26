#include <stdio.h>
int power(int a,int b){
   int p=1;
    for (int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}

int main (){
    int a,b;
    printf("Enter the base \n");
    scanf("%d",&a);
    printf("Enter the exponent/power \n");
    scanf("%d",&b);

    int total = power (a,b);
    printf("%d raised to the power %d is %d",a,b,total);
    return 0;
}