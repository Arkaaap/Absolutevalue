//FIND THE DIFFERENCE BETWEEN SUM OF ELEMENTS AT EVEN INDICES TO THE SUM OF ELEMENTS AT ODD INDICES 
#include <stdio.h>
int main (){
    int ar [5]={1,2,3,4,5};
    int even=0;
   int  odd =0;
   for (int i=0;i<=4;i++){
    if (i%2==0)
    even+=ar[i];
    else {
        odd+=ar[i];
    }
   }
   printf("%d ",even-odd);
   return 0;
}