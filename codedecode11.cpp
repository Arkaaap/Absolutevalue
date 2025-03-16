/*Author : Arkaaap DATE 3/16/2025
In certain code 'TIGER' is written as 'QDFHS'. How is 'FISH' written in that code?
SOURCE - HITBULLSEYE
*/

/*R E G I T 
  Q D F H S*/
  

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void encode (char *c)
{
    int l =strlen(c);
    char *c1 = (char *)malloc(l+1);
    for (int i=(l-1);i>=0;i--)
    {
        c[i] = c[i]-1;
        printf ("%c",c[i]);
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
