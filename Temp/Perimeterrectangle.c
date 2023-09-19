#include <stdio.h>
void main(){

    float x;
    float y;
    float p;
   
    printf("Put the length ");
    scanf("%f",&x);

     printf("Put the width ");
    scanf("%f",&y);

    p=2.0*x+y;   /* perimeter = 2 * ( width + height )*/

    printf("%f",p);
    



    getch();
}