#include <stdio.h>
int main(){
    int a,b,c;
    printf("PUt the 1st number ");
    scanf("%d",&a);

     printf("PUt 2nd  number : ");
    scanf("%d",&b);

     printf("PUt 3rd number ");
    scanf("%d",&c);
if (a<=b && a<=c)
printf("%d",a);

  else if (b<=a && b<=c)
printf("%d",b);


 else if (c<=a && c<=b)
printf("%d",c);


else {
    printf("No number met the required concept");
}






    



    return 0;

}


