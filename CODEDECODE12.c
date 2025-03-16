/*AUTHOR Arkaaap , date 3/16/2025
In certain code 'FROZEN' is written as 'OFAPSG'. Then how would 'MOLTEN' be written in that code?
   REVERSE THE GODAMN WORD AND STACK +1 IN EACH BETWEEN WORDS 
    N E T L O M 
    O F U M P N 
  source : hitsbulleye reasoning (encode and decode )

*/
  

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void encode (char *c)
{
    printf ("Encoding ...");
    int l =strlen(c);
    char *c1 = (char *)malloc(l+1);
    for (int i=(l-1);i>=0;i--)
    {
        if (c[i]>'A' && c[i]<'Z'){
        c[i] = c[i]+1;
        printf ("%c",c[i]);
    }
    }
    
}


void decode (char *c)
{
    printf ("\nDecoding ...");
    int l = strlen (c);
    for (int i=0;i<l;i++)
    {
        c[i]= c[i]-1;
    }
    printf ("%s",c);
}

int main (void)
{
    char c[100];
    printf ("Enter The String :");
    scanf ("%s",c);
    encode(c);
    decode(c);
    return (0x00);
}
