//FIND THE TOTAL NUMBERS OF PAIRS IN AN ARRAY WHO'S SUM IS EQUAL TO A GIVEN VALUE 'X'
#include <stdio.h>
int main (){
    int arr[5]={1,2,3,4,5},x=8;
    int pairs=0;
    for (int i=0;i<=4;i++){
        for (int j=i+1;j<=4;j++){
        if (arr[i]+arr[j]==x)
                pairs++;
             }
    }
    printf("%d ",pairs);
    return 0;
}