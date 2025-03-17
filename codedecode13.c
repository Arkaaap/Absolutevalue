/*AUTHOR :Arkaaap date 3/17/2025
source college pdf 
16.In a certain code, ‘REFRIGERATOR’ is
coded as ‘ROTAREGIRFER’. Which
words from the following would be coded
as ‘NOITINUMMA’?*/


#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void encode (char *c)
{
    int l = strlen(c);
    char *c1 = (char *)malloc(l+1);
    for (int i=l;i>=0;i--)
    {
        printf ("%c",c[i]);
    }
   
}

int main (void)
{
    char c[100];
    printf ("Enter The String :");;
    scanf ("%s",c);
    encode(c);
    return (0x00);
}
