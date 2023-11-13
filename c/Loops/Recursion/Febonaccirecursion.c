//Febonacci cannot be calculated by recursion as mam had told us ;




#include <stdio.h>
int febo(int n){
    if (n==0  || n==1)
    return 1;
    else {
        int var1 = febo(n-1);
        int var2= febo(n-2);
        int varx = var1+var2 ;
        return varx;
    }
    
}
int main (){
    int a;
    printf ("Enter the number : ");
    scanf("%d",&a);
    printf("%d",febo(a));
    return 0;
}