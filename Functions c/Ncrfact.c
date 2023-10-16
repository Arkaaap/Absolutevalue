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
    
    int nfact=ncr(n);
    int rfact =ncr(r);
    int nrfact =ncr(n-r);
    int factorial=nfact/(rfact*nrfact);
   
    printf("%d",factorial);
    return 0;

}