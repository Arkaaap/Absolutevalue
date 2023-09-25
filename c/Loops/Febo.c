// #include <stdio.h>
// int  main (){
//     int i,n,a=0,b=1,c;
//     printf("Enter the febonacci :");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//        a=b;
//         b=c;
//         c=a+b;
        
//     printf("%d ",c);
//     }
//     printf("\n");
//     return 0;
// }



#include <stdio.h>

int main() {
    // Write C code here
    int n,i,a=1,b=0,c=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        
        a=b;
        
        b=c;
        c=a+b;
        
        printf("%d ",c);
    }
    printf("\n");

    return 0;
}