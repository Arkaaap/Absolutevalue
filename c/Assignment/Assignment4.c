// //printing pyramid with febonaci series 
// #include <stdio.h>
// int main (){
//     int i,n,j,c,a=0,b=1;
//     printf("Enetr the row's :");
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         for(j=1;j<=2*n-1;j++){
//         if (j>=n-(i-1)&&j<=n+(i-1)){
//             printf("%d",a);
//             a=b;
//             b=a;
//             c=a+b;
//         printf("%d",b);}
//         else 
//         printf(" ");
//     }
//     printf("\n");

//     }
//     return 0;
// }




#include <stdio.h>

int main() {
    int n, i, j, k, a = 0, b = 1, c;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        a = 0;
        b = 1;
        for (k = 1; k <= n - i; k++) {
            printf("  ");  // Print spaces for pyramid pattern
        }
        for (j = 1; j <= i; j++) {
            printf("%3d ", a);  // Print Fibonacci numbers
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}


// #include <stdio.h>
// int main (){
//     int a=0,b=1,n,c,row,col,space;
//     printf("Enter the row's ");
//     scanf("%d",&n);
//     for(int row =1;row<=n;row++){
       
//        for(space =1;space<=n-1;space ++){
//        printf(" ");}
    

//     for(col=1;col<=row;col++ ){
//         printf(" %3d ",a);
//         c=a+b;
//         a=b;
//         b=c;

//     }
//     printf("\n");
//     }
//     return 0;
// }