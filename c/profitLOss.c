#include<stdio.h>
int main () {
int cp;
printf("Enter the cost price :");
scanf("%d",&cp);

int sp;
printf("Enter the selling price :");
scanf("%d",&sp);


    if (sp>cp)
    printf("Profit :");



    if (sp<cp)
    printf(" Loss :");
    



    if (sp==cp)
    printf("NPNL:");


return 0;
}


