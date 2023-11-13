//FIND OUT THE Max elemnt and it's index 

#include <stdio.h>
#include <limits.h>
int main (){
    int a [3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int max=INT_MIN;
    int i;
    for ( i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (max<a[i][j]){
                max=a[i][j];
            }
        }
    }

       printf (" %d is max elemnt and index is %d ",max,i);
       return 0;
}