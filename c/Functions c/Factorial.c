#include <stdio.h>
int fact(a){
    int factorial = 1;
    for (int i=2;i<=a;i++){
        factorial *=i;
    }
    return factorial;
}

int main (){
    int n;
    printf("Enter the n : ");
    scanf("%d",&n);
    int total = fact(n);
    printf("%d",total);
}