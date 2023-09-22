#include<stdio.h>
int main (){
    int x,y,z;
    printf("Enter 1st number : ");
    scanf("%d",&x);

    printf("Enter 2nd number : ");
    scanf("%d",&y);

    printf("Enter 3rd number : ");
    scanf("%d",&z);

    if(x<=y && x<=z)
    printf("The number is least %d ",x);

    else if(y<=x && y<=z)
    printf("Thhe number is least %d ",y);


    else if(z<=x && z<=y)
    printf("The least number is   %d",z);

    return 0;



}