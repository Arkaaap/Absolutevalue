#include <stdio.h>
int main (){

    
int m,i,sum=0;
    printf("Give the number   :\n");
    scanf("%d",&m);
 
    for(int i=m;i>0;i=i/10){
         
        
        sum++;
        printf("The number  ");
       
        {
            printf("%d ",sum);
        }
    }
 

    return 0;

    }