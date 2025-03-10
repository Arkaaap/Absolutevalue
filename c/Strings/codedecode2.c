/*OCTAGON IS CODED AS COUPBHPO
  OC+1+1+1+1+1

*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encode (char *c)
{
    int l= strlen(c);
    char *c1 = (char*)malloc(l+1);
    c1[0] = c[1];
    c1[1] = c[0];
    
    for (int i=2;i<l;i++)
    
    {
        c1[i] = c[i]+1;
    }
    
    c1[l]= '\0';
    printf ("%s",c1);
    return ;
}


int main (void)
{
    char c[100];
    printf ("ENTER The String :");
    scanf ("%s",c);
    encode(c);
}




