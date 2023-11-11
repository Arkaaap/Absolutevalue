#include <stdio.h>
int febo(int n){
    if (n==1 || n==0)
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
    int febonacci = febo(a);
    printf("%d",febonacci);
    return 0;
}


// FEBONACCI USING RECURSION ********