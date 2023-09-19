#include<stdio.h>
void main(){
    int a;
    printf("Enter a year");
scanf("%d",&a);
if(a%400==0 || a%4==0)
printf("The year is leap year ");

else 

printf("The year is not a leap year");
getch ();

}