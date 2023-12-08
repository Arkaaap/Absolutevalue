//THE MULTIPLICATION OF TWO MATRICES 
#include <stdio.h>
int main (){
    int a[3][2]={1,2,3,4,5,6};
    int b[2][4]={1,2,3,4,5,6,7,8};
    int result [3][4];
    int row_column = 2;
    printf ("The multipliaction of elemnts in given matrices are  : \n\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            result[i][j]=0;
            for (int k=0;k<row_column;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
     for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            printf ("%d ",result[i][j]);
        }
        printf ("\n");
    }
}