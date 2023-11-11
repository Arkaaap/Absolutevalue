#include <stdio.h>
int sum (int n ){
    if (n==1|| n==0)
    return n;
    else {
        return n+sum(n-1);
    }
}
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int total = sum(n);
    printf("%d",total);
    return 0;
}
