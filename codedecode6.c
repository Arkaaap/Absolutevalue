/In a certain code 'ROAR' is written as 'URDU'. How is 'URDU' written in that code?/


#include <stdio.h>
#include <string.h>

void endcode (char *c)
{
    int len = strlen(c);
    int sum = 3;
    char c1 [100];
    for (int i = 0 ;i<=len-1;i++)
    {
        c[i] = c[i]+3;
    }
    fprintf (stdout,"Encoding...\n");
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
