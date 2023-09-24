#include <stdio.h>
int main (){
    int a,b,n,sum,multi,div,addi;
    printf("Eneter the 1st number :");
    scanf("%d",&a);

    printf("Eneter the 2nd number :");
    scanf("%d",&b);

    printf("To addition press 1\n To substraction press 2\n To multiplication press 3\n  To division press 4\n");
printf("Give a choice ");
scanf("%d",&n);
switch (n)
{
case 1:
    printf("The sum two numbers are %d",a+b);
    break;

case 2:
    printf("The substraction two numbers are %d",a-b);
    break;

    case 3:
    printf("The multiplication  two numbers are %d",a*b);
    break;

    case 4:
    printf("The division two numbers are %d",a/b);
    break;
default:
printf("Invalid option ");
    break;
}
return 0;
}