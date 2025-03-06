/*
s = 'MEAT'
print s[len(s)-1]+s[1:len(s)-1:]+s[0]
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Encode ()
{
    char c[100];
    fprintf (stdout,"Enter The string :");
    //fgets (c,sizeof(c),c);
    scanf ("%s",c);
    int l = strlen(c);
    char *c1 = (char*)malloc(l+20);
    if (l<4)
    {
        printf ("Too small to encode");
        return ;
    }
    if (c1 == NULL)
    {
        printf ("No space :");
        return ;
    }
    
    int track = 0 ;
    c1[track++] = c[l-1];
    
    for (int i=1 ;i<l-1;i++)
    {
        c1[track++] = c[i];
    }
    c1[track++] = c[0];
    c1[track] = '\0';
    printf ("Encoding ...");
    printf ("%s\t",c1);
    
}


int main ()
{
    Encode();
    return (0);
}
