#include <stdio.h>
int main (){
    int n;
    int r;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    printf("Enter the value of r : ");
    scanf("%d",&r);
    int nfact=1;
    int rfact=1;
    int nrfact=1;
    int ncr;
    for (int i=2;i<=n;i++) //n!
    nfact *=i;

     for (int i=2;i<=r;i++) //r!
    rfact *=i;

     for (int i=2;i<=n-r;i++) //(n-r)!
    nrfact *=i;
    ncr=nfact/(rfact*nrfact);//n!/r!(n-r!)
    printf("%d",ncr);
    return 0;

}