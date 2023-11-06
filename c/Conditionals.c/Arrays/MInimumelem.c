//FIND THE MINIMUM ELEMNT IN AN ARRAY ;
#include <stdio.h>
#include <limits.h>
int main (){
    int ar [5]={1,2,3,4,5};
    int min = INT_MAX;
    for (int i=0;i<=4;i++){
        if (min>ar[i]){
            min=ar[i];
        }
    }
    printf("%d ",min);
    return 0;
}