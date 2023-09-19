/*#include<stdio.h>
void main (){
int a,b;
char ch;
printf("Put a operator ");
scanf ("%c",&ch);

printf("Put the 1st num : ");
scanf ("%d",&a);


printf("Put the 2nd num :  ");
scanf ("%d",&b);

switch(ch){
    case '+' :
     printf("Addition is %d",a+b);
     break;

     case '-' :
     printf("susbtraction  is %d",a-b);
     break;

     case '*' :
     printf("multiplication  is %d",a*b);
     break;

     case '/' :
     printf("division is %d",a/b);
     break;

     default:
                printf("The operrator is invalid !!");
     



}

getch ();








}*/







#include <stdio.h>
void main ()
{
    int x;
    int y;
    char ch;
     printf("Enter an operator (+,-,*,/) ");
     scanf("%c",&ch);

     printf("Enter the 1st number ");
     scanf("%d",&x);

      printf("Enter the 2nd number ");
     scanf("%d",&y);

     switch (ch)
     {
     case  '+' :
     printf("The sum of two numbers are %d",x+y);
     break;

     case  '-' :
     printf("The substraction  of two numbers are %d",x-y);
     break;

     case  '*' :
     printf("The multiplication of two numbers are %d",x*y);
     break;

     case   '/' :
     printf("The div of two numbers are %d",x/y);
     break;

     default :
     printf("In valid operator !!");
     break;
     }

     getch ();





}