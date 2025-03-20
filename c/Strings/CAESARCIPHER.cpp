/*AUTHOR Arkaaap
IMPLEMENTING CAESAR CIPHER USING C 
DATE 3/19/25
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encode (char *c,int key)
{
    int l = strlen (c);
    char *c1 = (char *)malloc(l+1);
    for (int i=0;i<l;i++)
    {
        if ((c[i] >= 'A' && c[i] <= 'Z')||(c[i]>='a' && c[i]<='z)){
        c1[i] = c[i]+(key%26); // E = (x+key)%26
    }
    else {
        c1[i] = c[i]-26;
    }
}


printf ("%s",c1);
}

int main (void)
{
    char c[100];
    int key;
    printf ("Enter The String :");
    scanf ("%s",c);
    printf ("\n");
    printf ("Enter The Key :");
    scanf ("%d",&key);
    encode(c,key);
    return (0x0);
}
