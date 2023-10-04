#include <stdio.h>
void main (){
    int n;
    printf("Enter the nth term ");
    scanf("%d",&n);
    int x = 3;
    for (int i=3;i<=n;i+=1){
         x*= 4;
        printf("%d ",x);
   
    
    }
    getch ();



}