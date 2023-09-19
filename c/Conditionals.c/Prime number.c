#include <stdio.h>
void main (){
int x;

printf("Enter the number ");
scanf("%d",&x);

for(int x=1;x<=7;x++)
if(x%2==0 && x%3==0 && x%4==0 && x%5==0 && x%6==0 &&(x%7==0 || x%1==0))

printf("The number is prime %d",x);


    getch();
}