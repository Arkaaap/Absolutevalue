/* In a certain code language 'STRAIGHT' is written as 'TSARGITH' how will 'THURSDAY ' be written as in
the same code language*/

/*S T R A I G H T 
  T S A R G I T H */
  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void encode (char *c)
{
  fprintf (stdout,"Encoding...\n");
    printf ("ENCODED string :\n");
    int l = strlen(c);
    int i ,j;
    for (i =0 ;i<l-1;i = i+2)
    {
        int t = c[i];
        c[i] = c[i+1];
        c[i+1] = t;
    }
    for (i =0 ;c[i]!='\0';i++)
    {
        printf ("%c\t",c[i]);
    }
}




void decoded (char *c)
{
    printf ("DECODED string :\n");
    int l = strlen (c)-1;
    for (int i =0 ;i<l;i = i+2)
    {
        int t = c[i];
        c[i] = c[i+1];
        c[i+1] = t;
    }
    for (int i =0 ;c[i]!='\0';i++)
    {
        printf ("%c\t",c[i]);
    }
}





int main ()
{
    char c[100];
    printf ("Enter the String :");
    scanf ("%s",c);
    encode (c);
    printf ("\n");
    decoded(c);
}
