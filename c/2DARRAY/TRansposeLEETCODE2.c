// WAP TO PRINT THE TRANSPOSE OF THE MATRIX ENETRED BY THE USER & STORE IT IN ANOTHER MATRIX 


#include <stdio.h>
int main (){
    int n,m;
    printf("ENTER THE ROW'S : ");
    scanf("%d",&n);
    printf("ENTER THE col'S : ");
    scanf("%d",&m);
    int a[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    
    int b[n][m];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}