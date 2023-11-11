//FIND THE SUM OF N X M WHERE THE N IS ROWS AND M IS COLUMNS 
#include <stdio.h>
int main (){
    int n,m;
    printf("ENETR THE ROW'S ");
    scanf ("%d",&n);
    printf("ENETR THE col'S ");
    scanf ("%d",&m);
    int ar [n][m];
    printf("ENETR THE ELEMNTS : ");
    printf("\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int sum=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            sum+=ar [i][j];
        }
    }
    printf("%d ",sum);
    return 0;
    
}