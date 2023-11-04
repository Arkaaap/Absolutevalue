/ Recursion
///PreInpost
#include <stdio.h>
void preInpost (int n){
    if (n==0)
    return ;
    printf("Pre%d\n",n);
    preInpost(n-1);
    printf("In%d\n",n);
    preInpost(n-1);
    printf("Post%d\n",n);
    return ;
}
int main (){
    int n;
    printf("Enter the n : ");
    scanf("%d",&n);
    preInpost(n);
    return 0;
}




//Zigzag
#include <stdio.h>
void zigzag (int n){
    if (n==0)
    return ;
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    return ;
}

int main (){
    int n;
    printf("Enter the n : ");
    scanf("%d",&n);
    zigzag (n);
    return 0;
}

Stairpath

#include <stdio.h>
int StairPath (int n){
    if (n<=2)
    return n;
    return StairPath(n-1)+StairPath(n-2);
}
int main (){
    int n;
    printf("Enter the n : ");
    scanf("%d",&n);
    printf("%d",StairPath(n));
    return 0;
}

Find a raised to the power b

#include <stdio.h>
int power(int a, int b){
    if (b==0)
    return 1;
    return a*power(a,b-1);
}
int main (){
    int n,x;
    printf("Enter the power :");
    scanf("%d",&n);
    printf("Enter the exponent : ");
    scanf("%d",&x);
    printf("%d",power(n,x));
    return 0;
}



Fibo nacci
#include <stdio.h>
int fibo (int n ){
    if (n<=1)
    return 1;
    else {
        int var1=fibo(n-1);
        int var2=fibo(n-2);
        return var1+var2;
    }
}

int main (){
    int n;
    printf("Enter the n :");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}


Sum 1to N
#include <stdio.h>
int sum (int n){
    if (n==0 || n==1)
    return n;
    return n+sum(n-1);
}
int main (){
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("%d",sum (a));
    return 0;

}



Incdec 
#include<stdio.h>
void incdec (int n){
    if (n==0)
    return ;
    printf("%d ",n);
    incdec(n-1);
      printf("%d ",n);
      return ;
}
int main (){
    int n;
    printf("Enter the n :");
    scanf("%d",&n);
   incdec(n);
    return 0;
}





Factorial
#include <stdio.h>
int fact (int n){
    if (n<=1)
    return 1;
    return n*fact(n-1);
}
int main (){
    int n;
    printf("Enter the n :");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}