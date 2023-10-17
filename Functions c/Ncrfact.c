#include <stdio.h>
int ncr(n){
    int fact=1;
    for (int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main (){
    int n;
    int r;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the value of r : ");
    scanf("%d",&r);
    int nfact=ncr(n);//n!
    int rfact =ncr(r);//r!
    int nrfact =ncr(n-r);//(n-r!)
    int factorial=nfact/(rfact*nrfact);//n!/r!/(n-r!)
   
    printf("%d",factorial);
    return 0;

}