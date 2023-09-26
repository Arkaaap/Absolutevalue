// #include <stdio.h>
// int main (){
//     int n,reverse=0,rem,c;
//     printf("Enter the number :");
//     scanf("%d",&n);
//     c=n;//121
//     while (n>0)//121>0
//     {
//         rem=n%10;//121/10
//         reverse=rem+(reverse*10);//rem=1;store=0*10=0;0+1;
//         n=n/10;//1/10


//     }
//     if (c==reverse){//121==121
//         printf("Palindrome ");//yes
        
//     }
//     else printf ("not");//not
//     return 0;
// }


//Armstrong
#include <stdio.h>
#include <math.h>
int main (){
    int n,arm=0,rem,c;
    printf("Enter the number :");
    scanf("%d",&n);
    c=n;
    while (n>0)
    {
        rem=n%10;
        arm=(rem*rem*rem)+arm;
        n=n/10;


    }
    if (c==arm){
        printf("Armstrong  ");//yes
        
    }
    else printf ("not");//not
    return 0;
}


