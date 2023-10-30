#include <stdio.h>
int ncr(n){
    int fact=1;
    for (int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int comb (a,b){
    int nfact=ncr(a);//n!
    int rfact =ncr(b);//r!
    int nrfact =ncr(a-b);//(n-r!)
    int factorial=nfact/(rfact*nrfact);//n!/r!/(n-r!)
    return factorial;
}
int main (){
    int n;
    int r;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    int ncr = comb(n,r);
    printf("%d",ncr);
    return 0;

}