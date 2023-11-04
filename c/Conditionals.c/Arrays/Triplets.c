//FIND THE TOTAL NUMBERS OF TRIPLETS IN AN ARRAY WHO'S SUM IS EQUAL TO A GIVEN VALUE 'X'
#include <stdio.h>
int main (){
    int arr[5]={1,2,3,4,5},x=10;
    int Triplets=0;
    for (int i=0;i<=4;i++){
        for (int j=i+1;j<=4;j++){
            for (int k =j+1;k<=4;k++){
                if (arr[i]+arr[j]+arr[k]==x)
                Triplets++;
            }
        }
    }
    printf("%d ",Triplets);
    return 0;
}