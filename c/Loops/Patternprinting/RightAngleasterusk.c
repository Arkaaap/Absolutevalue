#include <stdio.h>
int main (){
    int i,j,n;
    printf("Enetr row's =");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(j=1;j<=i;j++){
          
            printf("*");
        }
        printf("\n");
    }
    return 0;
}