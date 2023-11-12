//FIND THE SUM OF A GIVEN MATRIX N X M 
#include <stdio.h>
int main (){
    int n,m;
      int sum=0;
    printf("ENTER THE RO NO ");
    scanf ("%d",&n);
    printf("ENTR THE COL NO ");
    scanf("%d",&m);
    int a [n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",a [i][j]);
        }
        printf("\n");
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            sum+=a [i][j];
        }
    }
    printf("THE SUM OF TWO MATRICES ARE %d  ",sum);
    return 0;
}