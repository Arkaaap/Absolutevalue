#include<stdio.h>
int main(){

    int p,r,t,si;
    printf("Put the principal in it :");
    scanf("%d",&p);
    printf("Put the rate in it :");
    scanf("%d",&r);
    printf("Put the time in it :");
    scanf("%d",&t);


    si=p*r*t/100;

    printf("The interst will be %d",si);

    return 0;
}