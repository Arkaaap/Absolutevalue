/*Check If The Array Is palindrome */

#include <stdio.h>
#include <stdlib.h>

void revArray (int *a,int n)
{
    int a1[100];
    for (int i=(n-1);i>=0;i--)
    {
        a1[n-1-i] = a[i];
        printf ("%d\t",a[i]);
        
    }
    int Pal =  0;
    for (int i=0;i<n;i++)
    {
        if (a1[i]==a[i]){
            Pal = 1 ;
            break;
        }
    }
    
    if (Pal == 1)
    {
        printf ("Pal");
    }
    else {
        printf ("Not ");
    }
}

int main (void)
{
    int a[] ={1,2,3,4,5,6,7,789};
    int n = sizeof(a)/sizeof(a[0]);
    revArray(a,n);
    return (0);
}
