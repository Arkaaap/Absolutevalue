//Author Arkaaap 
// demonstrated a function pointer of an array pointing to functions like an array index .


#include <stdio.h>
#include <stdlib.h>

int add (int a,int b)
{
    return a+b;
}


int subtract (int a,int b)
{
    return (a-b);
}


int multiplication (int a ,int b)
{
    return (a*b);
}


int division (int a,int b)
{
    return (a/b);
}



int main ()
{
    int (*exec[]) (int ,int ) = {add,subtract,multiplication,division};
    int product = (*exec[2])(10,6);
    int add  = (*exec[0])(10,6);
    int sub = (*exec[1])(10,6);
    int dib = (*exec[3])(10,6);
    fprintf(stdout,"product: %d\t\n",product);
    fprintf(stdout,"add: %d\t\n",add);
    fprintf(stdout,"subtract: %d\t\n",sub);
    fprintf(stdout,"division: %d\t\n",dib);
    return (0);
}
