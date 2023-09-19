#include<stdio.h>
int main(){
    float si,ci,p,r,t;
    printf("Put the principal ");
    scanf("%f",&p);
    printf("Put the rate ");
    scanf("%f",&r);
    printf("Put the time ");
    scanf("%f",&t);
    si= p*r*t/100;
    //ci =P(1 + r / n)nt;//
    
   printf("Your interest will be :%f",si);
   return 0;
}