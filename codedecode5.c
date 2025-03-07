/*In a certain code 'MISSIONS' is written as 'MSIISNOS'. How is 'ONLINE' written in that code?
*/

#include <stdio.h>
#include <string.h>

void endcode (char *c)
{
    int len = strlen(c)-1;
    for (int i = 1 ;i<=len-1;i+=2)
    {
        int t = c[i];
        c[i] = c[i+1];
        c[i+1] =t ;
    }
    for (int i =0 ;c[i]!='\0';i++)
    {
        printf ("%c\t",c[i]);
    }
    
    
}


int main (void)
{
    char c[100];
    printf ("Enter The string :");
    scanf ("%s",c);
    endcode(c);
    return (0x00);
}
