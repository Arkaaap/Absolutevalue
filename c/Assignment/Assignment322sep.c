#include <stdio.h>
int main (){
    //Write a program in c to read an integer & show the multiplication table of that ineteger 
    int i,n;
    printf("Enetr a number for multiplication table :");
    scanf("%d",&n);
    printf("The multiplication table of %d is \n", n);
    for (i=1;i<=n;i++){
        printf("%d x %d=%d\n",i=n*i);
    }
    return 0;
}