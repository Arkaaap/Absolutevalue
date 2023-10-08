#include <stdio.h>
int main (){
    int i,j,n,a=0,b=1,c;
    printf("Enetr row's =");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(j=1;j<=n;j++){
           a=b;
           b=c;
           c=a+b;
            printf("%d ",c);
            
        }
        printf("\n");
    }
    return 0;
}