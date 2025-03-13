/*In a certain code language “CONSTRUCTION” is written as “EMPQVPWAVGQL”. What will be the code for “DESTRUCTION” in the same language(even indecies +2 and odd -2 )

SOURCE "https://byjus.com/govt-exams/coding-decoding-questions/"*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void encode (char *c)
{
    int l = strlen(c);
    char *c1 = (char *)malloc(l+1);
    for (int i=0;i<l;i++)
    {
        if (i%2 == 0)
        {
            c1[i] = c[i]+2;
        }
        else {
            c1[i] = c[i]-2;
        }
        
        
    }
    
    printf ("%s",c1);
    
    
    
}



int main (void){
    char c[100];
    printf ("Enter The String :");
    scanf ("%s",c);
    encode(c);
    return (0x001-1);
}
