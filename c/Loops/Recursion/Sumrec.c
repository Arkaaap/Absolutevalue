#include <stdio.h>
void sum (int n , int x){
    if (n==0){
        printf("%d",x);
        return ;
    }
    sum (n-1,x+n);
    return ;
}
//sum of numbers using reursion 
int main (){
    int n;
    printf("Enter the n : ");
    scanf ("%d",&n);
    sum (n,0);
    return 0;
}


