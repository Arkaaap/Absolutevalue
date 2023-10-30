//febonacci;
// #include <stdio.h>
// int febo (n){
//     int a=0,b=1,c=1;
    
//     for (int i=1;i<=n;i++){
//         a=b;
//         b=c;
//         c=a+b;
        
//     }
//     return c;
    
// }
// #include <stdio.h>
// int main (){
//     int a;
//     printf ("Enter the number ");
//     scanf("%d",&a);
//     int febonacci = febo(a);
//     printf("%d",febonacci);
// }













#include <stdio.h>
int main (){
    int n,factorial =1,i;
    printf("Enter the number : ");
    scanf("%d",&n);
    for (int i=2;i<=n;i++){
        factorial *=i;
        
    }

    printf("%d ",i);
    return 0;
}