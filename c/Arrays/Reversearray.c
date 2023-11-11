//WAP TO COPY THE ELEMENTS IN AN ARRAY INTO ANOTHER 
#include <stdio.h>
int main (){
    int ar [5]={1,2,3,4,5};
    int brr[5];
    for (int i=0;i<=4;i++){
        brr[i]=ar [4-i];//n-1,n-2,n-3 upto n-n
    }
    for (int i=0;i<=4;i++){
        printf("%d ",ar[i]);
    }
    for (int i=0;i<=4;i++){
        printf("   '%d' ",brr[i]);
    }
   return 0;
}