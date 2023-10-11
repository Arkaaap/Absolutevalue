#include <stdio.h>
int main (){
int n,counter=0 ;
printf("Enter the number: ");
scanf("%d",&n);
// if (n==0){
//     printf("%d",n);
// }
// else {
while (n>0)


{
n/=10;
counter ++;
}
printf("%d",counter );
// }
return 0;
}