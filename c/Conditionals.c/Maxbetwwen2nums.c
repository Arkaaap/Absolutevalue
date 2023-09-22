#include <stdio.h>
void main (){
    int a,b;
    printf("Enter 1st number :");
    scanf("%d",&a);

    printf("Enter 2nd number :");
    scanf("%d",&b);


    if (a>b){
        printf("The number is maximum %d",a);
    }
    else if (b>a) {
        printf("The number is max %d",b);
    }
    getch ();

}