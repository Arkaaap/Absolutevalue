/*#include<stdio.h>
int main (){
int x;
printf("Put a number");
scanf("%d",&x);
if(x>0) printf("The number is positive \n");
else
printf("The number is negative please try again");
return 0;

}/**/


#include <stdio.h>
int main(){
    int a;
    printf("Put your age ");
    scanf("%d",&a);

    if(a<21) printf("The candidate is not applicable for voting try again later!!\n");
    else
    printf("The candidate is up for voting\n");


 printf("Put your age ");
    scanf("%d",&a);

    if(a<21) printf("\nThe candidate is not applicable for voting try again later!!");
    else
    printf("The candidate is up for voting");



    return 0;
}