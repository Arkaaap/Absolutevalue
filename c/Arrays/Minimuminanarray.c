#include <stdio.h>
#include <limits.h>
int main (){
    int arr[5]={1,2,3,4,5},i;
    int min = INT_MAX;
    for (i =0;i<=4;i++){
        if (min>arr[i])
        min=arr[i];
    }
    printf("%d",min);
    return 0;
}