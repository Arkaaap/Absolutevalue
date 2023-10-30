#include <stdio.h>
int square (int n){
    return n*n;
}

int main (){
    int n ;
    printf("Enter the n : ");
    scanf("%d",&n);
    printf("%d is the square of %d",square(n),n);
    return 0;
}