#include <stdio.h>
int fact (n){
    int factorial = 1;
    for (int i=2;i<=n;i++){
        factorial *=i;
    }
    return factorial;
}

int permutation(a,b){
    int nfact =(a);
    int nrfact =(a-b);
    int tot = nfact/nrfact;
    return tot;
}

int main (){
    int n,r;
    printf("Enter the value of N : ");
    scanf("%d",&n);
     printf("Enter the value of R : ");
    scanf("%d",&r);
    
    int npr = permutation(n,r);
    printf("%d",npr);
    
}