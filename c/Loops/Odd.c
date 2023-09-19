/*#include <stdio.h>
int main(){
  
    for (int i=1;i<=1000;i=i+1){
       
            printf("%d",i);
        
        if (2%i!=0) printf ("%d ",i);

    }
    return 0;



}/**/







#include <stdio.h>
void main (){
    int x;
    printf("Enter the number" );
    scanf("%d",&x);

    for (int x=1;x<=10000;x++){
        if(x==50)
        break;
        printf("%d",x);
    }
       
    
    

    getch();

    

}
