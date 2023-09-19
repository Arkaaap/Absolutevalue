#include <stdio.h>
int main(){

    int a;
    float b;
    char x;
    int fn;

    printf("put a number :");
    scanf("%d",&a);
     printf("put a float :");
     scanf("%f",&b);

      printf("put a character :");
      scanf("%s",&x);
      fn =(a+b+x);

      printf ("Here is your integer num and float number character :%d ",fn);
      return 0;
}