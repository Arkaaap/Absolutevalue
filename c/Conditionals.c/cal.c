/*#include<stdio.h>
void main (){
    int x;
    int y;
    char ch;

    printf("Enter the operator");
    scanf("%c",&ch);
    
    printf("Enter the 1st number ");
    scanf("%d",&x);

     printf("Enter the 2nd number ");
    scanf("%d",&y);

    

    if(ch=='+') printf("The sum of two numbers %d",x+y);
    else if(ch=='-') printf("The subs of two numbers %d",x-y);
    else if(ch=='*') printf("The multiplication of two numbers %d",x*y);
    else if(ch=='/') printf("The sum of div numbers %d ",x/y);

    else printf("Invalid operator !");

    getch ();

    


}*/









#include<stdio.h>
void main (){
    int x;
    int y;
    char ch;

    printf("Enter the operator");
    scanf("%c",&ch);
    
    printf("Enter the 1st number ");
    scanf("%d",&x);

     printf("Enter the 2nd number ");
    scanf("%d",&y);

    

    if('+') printf("The sum of two numbers %d",x+y);
    else if('-') printf("The subs of two numbers %d",x-y);
    else if('*') printf("The multiplication of two numbers %d",x*y);
    else if('/') printf("The div of  numbers %d ",x/y);

    else printf("Invalid operator !\n");


    

    

    getch ();

    


}