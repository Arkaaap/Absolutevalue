#include <stdio.h>
int arm (int n){
    int a=0,rem=0;
    while (n!=0){
        rem = n%10;
        a = (rem*rem*rem)+a;
        n/=10;
    }
    return a;
}

int main (){
    int n,store;
    printf("Enter the n : ");
    scanf("%d",&n);
    if (n==arm(n))
    printf("Armstrong");
    else {
    printf("Not arm");
    }
    return 0;
}