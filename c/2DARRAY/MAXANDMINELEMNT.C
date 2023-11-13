//FIND OUT THE MAXm  &  MINm  ELEMNTS IN A 2D ARRAY .
#include <stdio.h>
#include <limits.h>
int main (){
    int a [3][3]={1,2,3,4,5,6,7,8,9};
    int max=INT_MIN;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (max<a[i][j]){
                max=a[i][j];
            }
        }
    }
    //MINIMUM
    int min = INT_MAX;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (min>a[i][j]){
                min=a[i][j];
            }
        }
    }
    
            printf("%d is MAX ELEMNT AND %d is MIN ELEMNT : ",max,min);
            
        
    return 0;
}