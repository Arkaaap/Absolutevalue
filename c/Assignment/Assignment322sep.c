// #include <stdio.h>
// int main (){
//     //Write a program in c to read an integer & show the multiplication table of that ineteger 
//     int i,n;
//     printf("Enetr a number for multiplication table :");
//     scanf("%d",&n);
//     // printf("The multiplication table of %d is \n", n);
//     for (i=1;i<=10;i++){
//         printf("%d X %d\n=%d\n",n,i,n*i);
//     }
//     return 0;
// }



//factorial of any number ;//fac of a number let's say the num is '5' 5*4*3*2*1=120 120 is factorial of '5'
#include <stdio.h>
int main (){
    int i,factorial=1,n;
    printf("Enter the Number :");
    scanf("%d",&n);{
    for (int i=1;i<=n;i++)
        factorial*=i;}
        printf("The factorial number of following integer %d is %d\n",n,factorial);
    
    return 0;
}
