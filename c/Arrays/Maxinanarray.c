#include <stdio.h>
#include <limits.h>
int main (){
    int arr[5]={1,2,3,4,5},i;
    int max = INT_MIN;
    for (i =0;i<=4;i++){
        if (max<arr[i])
        max=arr[i];
    }
    printf("%d",max);
    return 0;
}