#include<stdio.h>
int power(int a,int b){
    if (b==0)
    return 1;
    int recanswer=a*power(a,b-1);
    return recanswer;
}

int main (){
    int a,b;
    printf("Enter the base : ");
    scanf("%d",&a);
    printf("Enter the power/exponent : ");
    scanf("%d",&b);
    int answer=power(a,b);
    printf("%d raised to the %d is %d",a,b,answer);
    return 0;
}