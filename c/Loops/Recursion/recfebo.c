#include <stdio.h>
int main (){
    int n,fact;
    printf("Enter the number : ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("%d",fact);
    return 0;
}
int factorial(n){
    int i,nf,a=1,b=0,c=1;
    for (i=1;i<=nf;i++){
        {a=b;
        b=a;
        c=(a+b);
        }
        return c;
    }
}

//It's not working though as mam has told us febonacci printing in recursion will not fit