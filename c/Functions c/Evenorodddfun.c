#include <stdio.h>
int evenodd (int n){
    return (n%2==0);
    return (n%2!=0);
}

int main (){
    int n ;
    printf("Enter the n : ");
    scanf("%d",&n);
    if (evenodd(n))
    printf("Even ");
    else printf("Not");
    return 0;
}