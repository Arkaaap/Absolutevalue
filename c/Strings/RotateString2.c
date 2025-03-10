/* Rotate a string from right to left with 2 step 
    READY 
    YDREA
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
    int temp1 = c[l-2];
    for (int i=0 ;i<l-2;i++)
    {
        c1[i+2] =  c[i];
    }
    
    c1[0] = temp;
    c1[1] = temp1;
    printf ("%s\t",c1);
}


int main (void)
{
    char c[100];
    printf ("Enter The string :");
    scanf ("%s",c);
    encode(c);
}
