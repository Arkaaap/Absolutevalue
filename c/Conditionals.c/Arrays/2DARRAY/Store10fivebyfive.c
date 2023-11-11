//WRITE A PROGRAM TO STORE 10 AT EVERY INDEXES OF 2D MATRIX WITH 5 ROWS AND 5 COL'S;
#include <stdio.h>
int main (){
    int a [5][5];
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            scanf("%d",&a [i][j]);
        }
    }
    printf ("\n");
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            printf("%d ",a [i][j]);
        }
        printf("\n");
    }
    return 0;
}