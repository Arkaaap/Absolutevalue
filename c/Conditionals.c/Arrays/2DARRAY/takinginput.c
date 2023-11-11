//WRITE A PROGRAM TO STORE ROLL NO AND MARKS OBRAINED BY 4 STUDENTS SIDE BY SIDE IN A MATRIX (TAKING USER INPUT )
#include <stdio.h>
int main (){
    int a [4][2];
    for (int i=0;i<4;i++){
        for (int j=0;j<2;j++){
            scanf("%d",&a [i][j]);
        }
    }
    printf ("\n");
    for (int i=0;i<4;i++){
        for (int j=0;j<2;j++){
            printf("%d ",a [i][j]);
        }
        printf("\n");
    }
    return 0;
}