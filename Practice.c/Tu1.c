#include <stdio.h>
#include <limits.h>
int main (){
    int ar[5];
    int i;
    int x=ar[i];
    for (int i=0;i<=4;i++){
        scanf("%d",&ar[i]);
    }
    for (int i=0;i<=4;i++){
        printf("elements %d:%d \n",i,ar[i]);
    }
    for (int i=0;i<=4;i++){
        if (ar[i]==x){
            printf(" DUPLICATE ELEMNTS :%d ",ar[i]);
        }
    }
  



    
    
    
    return 0;
}
