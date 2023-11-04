//COUNT THE NUMS IN AN GIVEN ARRAY GREATER THAN A GIVEN NUM  X
#include <stdio.h>
int main (){
    int ar  [5]={1,2,3,4,5};
    int x=5;
    int count =0;
    for (int i=0;i<=4;i++){
        if (ar[i]>x)
        count ++;
    }
    printf("%d ",count);
    return 0;
}