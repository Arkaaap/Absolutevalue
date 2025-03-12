/*WAP IN C TO ROTATE A STRING FROM RIGHT TO LEFT WITH 3 CHRACTERS :
    READY 
    YDA RE*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encode (char *c)
{
    int l = strlen(c);
    char *c1 = (char *)malloc(l+1);
    int t = c[l-1];
    int t1 = c[l-2];
    int t2 = c[l-3];
    for (int i=0;i<(l-3);i++)
    {
       c1[i+3] = c[i];
    }
    c1[0] = t;
    c1[1] = t1;
    c1[2] = t2;
   printf ("%s\t",c1);
}

int main (void)
{
    char c[100];
    printf ("Enter the String :");
    scanf ("%s",c);
    encode(c);
}


