/* Rotate a string from right to left with 1 step 
    READY 
    Y READ
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encode (char *c)
{
    printf ("Encoded String :\n");
    int l = strlen (c);
    char *c1 = (char*)malloc(l+40);
    int temp = c[l-1];
    for (int i=l-1 ;i>0;i--)
    {
        c1[i] =  c[i-1];
    }
    
    c1[0] = temp;
    printf ("%s\t",c1);
}


int main (void)
{
    char c[100];
    printf ("Enter The string :");
    scanf ("%s",c);
    encode(c);
}
