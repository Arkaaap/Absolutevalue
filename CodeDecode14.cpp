/* 1.If a VIOLET is written as a TGMJCR, then what will be the BROWN
    V I O L E T 
    -2 -2 
    Source :UNACADEMY */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void encode (char *c)
{
    int l = strlen (c);
    char *c1 = (char *)malloc(l+1);
    for (int i=0;i<l;i++)
    {
        
        if (c[i]>='A' && c[i]<='Z' || c[i]>='a' && c[i]<='z'){
           printf ("%c",c[i]-2);
       
    }
    else {
        c[i] = c[i]-26;
    }
    }
    
    
    
}


int main (void)
{
    char c[100];
    printf ("Enter The String :");
    scanf ("%s",c);
    encode(c);
    return (0x00);
}
