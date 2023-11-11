//FIND THE DIFFERENCE BETWEEN SUM OF ELEMENTS AT EVEN INDICES TO THE SUM OF ELEMENTS AT ODD INDICES 
#include <stdio.h>
int main (){
    int ar [5]={1,2,3,4,5};
    int even=0;//even indices =1+3+5=9
   int  odd =0;//odd indices =2+4=6
   for (int i=0;i<=4;i++){
    if (i%2==0)
    even+=ar[i];
    else {
        odd+=ar[i];
    }
   }
   printf("%d ",even-odd);//9-6=3{ANSWER SHOULD BE 3 OF THAT PaRTICULAR CODE }
   return 0;
}