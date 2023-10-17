#include <stdio.h>
int fact(n){
    int factorial = 1;
    for (int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int combination (n,r){
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact (n-r);
    int ncr = nfact / (rfact*nrfact);
    return ncr;
}
int main (){
    int n,i,j;
    printf("Enter the number you want to print: ");
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        for (j=0;j<=i;j++){
                int icj = combination(i,j);
                printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}