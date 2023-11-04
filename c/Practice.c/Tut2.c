// //F U N C T I ON     

// //N P R (N! UPON N-R!) 

// #include <stdio.h>
// int fact (int n){
//     int f =1;
//     for (int i =2;i<=n;i++){
//         f *= i;
//     }
//     return f;
// }

// int npr (n,r){
//     int nfact = fact (n);
//     int nrfact = fact(n-r);
//     return nfact / nrfact;
// }

// int main (){
//     int n,r;
//     printf("Enter the value of N : ");
//     scanf("%d",&n);
//     printf("Enter the value of R : ");
//     scanf("%d",&r);
//     printf("%d ",npr(n,r));
//     return 0;
// }


// //N C R 

// #include <stdio.h>
// int fact (int n){
// int f=1;
// for (int i = 2;i<=n;i++){
//     f*=i;
// }
// return f;
// }

// int ncr (n,r){
//     int nfact = fact(n);
//     int rfact = fact(r);
//     int nrfact = fact(n-r);
//     return nfact / (rfact*nrfact);
// }

// int main (){
//     int a;
//     printf("Enter the value of N : ");
//     scanf("%d",&a);
//         int b;
//         printf("%d ",ncr (a,b));
//     return 0;
// }




// //P A S C A L T R I A N G L E  
// #include <stdio.h>
// int fact (int n){
// int f=1;
// for (int i = 2;i<=n;i++){
//     f*=i;
// }
// return f;
// }

// int ncr (n,r){
//     int nfact = fact(n);
//     int rfact = fact(r);
//     int nrfact = fact(n-r);
//     return nfact / (rfact*nrfact);
// }

// int main (){
//     int a;
//     printf("Enter the value of N : ");
//     scanf("%d",&a);
//     for (int i =0;i<=a;i++){
//         for (int j=0;j<=i;j++){
//             int icj = ncr(i,j);
//             printf("%d ",icj);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// //P A S C A L R E C T A N G L E 


// #include <stdio.h>
// int fact (int n){
// int f=1;
// for (int i = 2;i<=n;i++){
//     f*=i;
// }
// return f;
// }

// int ncr (n,r){
//     int nfact = fact(n);
//     int rfact = fact(r);
//     int nrfact = fact(n-r);
//     return nfact / (rfact*nrfact);
// }

// int main (){
//     int a;
//     printf("Enter the value of N : ");
//     scanf("%d",&a);
//     for (int i =0;i<=a;i++){
//         for (int j=0;j<=a;j++){
//             int icj = ncr(i,j);
//             printf("%d ",icj);
//         }
//         printf("\n");
//     }
//     return 0;
// }





// //A R I T H M E T I C  O P E R A T I O N S;
// SUM
// #include <stdio.h>
// int sum (int a , int b){
//     return a+b;
// }
// int main (){
//     int a, b;
//     printf("Enter the 1'st operand : ");
//     scanf ("%d",&a);
//     printf("Enter the 2'nd operand : ");
//     scanf ("%d",&b);
//     printf("%d",sum(a,b));
//     return 0;
// }




// //F I B O N A C C I 
// #include <stdio.h>
// int fibo (int n ){
//     int a=1,b=0,c=1;
//     for (int i = 1; i<=n;i++){
//         a=b;
//         b=c;
//         c=a+b;
//     }
//     return c;
// }

// int main (){
//     int n ;
//     printf("Enter the n :");
//     scanf("%d",&n);
//     printf("%d ",fibo(n));
//     return 0;
// }


// //F A C T O R I A L S;

// #include <stdio.h>
// int fibo (int n ){
//     int F =1;
//     for (int i = 2; i<=n; i++){
//         F *= i;
//     }
//     return F;
// }

// int main (){
//     int n ;
//     printf("Enter the n :");
//     scanf("%d",&n);
//     printf("%d ",fibo(n));
//     return 0;
// }



//  //A R M S T R O N G 
// #include <stdio.h>
// int arm (int n){
//     int remainder = 0, a =0;
//     while (n>0){
//         remainder= n%10;
//         a = remainder*remainder*remainder+a;
//         n/=10;
//     }
//     return a;
// }
// int main (){
//     int n,store;
//     printf("Enter the N : ");
//     scanf("%d",&n);
//     if (n==arm(n))
//     printf("Armstrong ");
//     else {
//     printf("Not armstrong : "); 
//     }
//     return 0;
// }





//N P R 
#include <stdio.h>
int fact (int n){
    int f=1;
    for (int i =0;i<=n;i++){
        f*=i;
    }
    return f;
}

int ncr (n,r){
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    return nfact/(rfact*nrfact);
}

int main (){
    int n;
    printf("Enter the N : ");
    scanf("%d ",&n);
   for (int i =0;i<=n;i++){
       for (int j=0;j<=i;j++){
           int icj = ncr (i,j);
           printf("%d ",icj);
       }
       printf("\n");
   }
    return 0;
}