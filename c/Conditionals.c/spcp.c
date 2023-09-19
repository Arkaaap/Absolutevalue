/*#include<stdio.h>
int main (){
    float x;
    printf("Put a number ");
    scanf("%f",&x);
    if(x>)
}*/

#include<stdio.h>
int main (){
    int cp;
    printf("Put the cost price ");
    scanf("%d",&cp);
    int sp;
     printf("Put the seeling  price ");
    scanf("%d",&sp);
    if (cp>sp) printf("loss %d",cp-sp);
    if (cp<sp) printf("Profit %d",sp-cp);
    if(sp==cp) printf("NPNL");
    return 0;

    
    
}


