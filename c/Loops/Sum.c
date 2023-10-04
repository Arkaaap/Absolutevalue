#include <stdio.h>
void main (){
 int x,sum=0;
 printf("Enter an integer number" );
 
 for (int x=1;x<=10;x++){
 

 sum+=x;

 printf("\n %d ",x);
 }
 printf("The number is %d",sum);
    getch ();
}