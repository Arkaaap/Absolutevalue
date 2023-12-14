#include <stdio.h>
int main (){
    int i,j,n;
    printf("Enetr row's =");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            printf (" ");
        }
        for(j=1;j<=n;j++){
           
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}