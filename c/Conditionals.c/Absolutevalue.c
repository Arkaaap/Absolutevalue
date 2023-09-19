#include<stdio.h>
int main (){
    int x;
    printf("Put a number :");
    scanf("%d",&x);

    if (x>=0)
    printf("The number is positive : %d\n ",x); //I declared here  if statement to demonstrate if a number gets postive then this will work or if the number is negative this will not work  
      

   if(x<0){
    x=x*(-1);
    printf("The number is positive even though you put a negative number  :%d",x); //if the previous will not work this will work where I put (x=x*(-1)) this means if negative number gets into positive through this formula and then I printed the x's value which means if an user gives a negative number thhis will automatic turn intto positive even though it's negative  
    }
    return 0;

}
