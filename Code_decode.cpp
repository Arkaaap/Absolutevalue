/*3.If ‘WATER’ is written as ‘YCVGT’, then what is written as ‘HKTG’*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Fun (char *c)
{
    for (char i =0 ;c[i]!='\0';i = i+1)//Looping from 0 to null terminator 
    {
        if (c[i]>='A' && c[i]<='Z')//checking if the string's current character is greater than a and less than z which means it's a valid charcter then increments the charatcter with +2
        {
            c[i]  = c[i]+2;
        }
        if (c[i]>'Z')
        {
            c[i] = c[i]-26;//if the charcter is not in the list round up to the A character again 
        }
    }
}

int main ()
{
    char c []= "WATER";
    Fun(c);
    fprintf (stdout,"Encoding...\n");
    printf ("%s\t",c);
    return (0);
}
