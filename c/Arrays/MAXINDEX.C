//FIND THE MAXIMUM INDEX OF AN ARRAY ;
#include <stdio.h>
#include <limits.h>
int main (){
    int ar [5]={1,2,3,4,5};
    int max = INT_MIN;
    for (int i=0;i<=4;i++){
        if (max>i){
            max=i;
        }
    }
    printf("%d ",max);
    return 0;
}