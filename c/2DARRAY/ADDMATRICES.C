// WAP TO ADD TWO MATRICES 
#include <stdio.h>
int main (){
int ar [2][2]={1,2,3,4};
int br [2][2]={5,6,7,8};
int result [2][2];
    
        for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            result [i][j]=ar [i][j]+br [i][j];
        }
    }
       for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
           printf("%d ",result[i][j] );
        }
    }
    return 0;
    
}