/*Q1. If EARTH is written as FCUXM in a certain code. How is MOON written in that code? 
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encode (char *c)
{
	fprintf (stdout,"Encoded String :\n");
	int l = strlen(c);
	for (int i=0 ;i<=l;i++)
	{
	    if (c[i]>='A' && c[i]<='Z')
	    {
	        c[i]+=i+1;
	    }
	}
	
	for (int i=0 ;i<=l;i++)
	{
	    printf ("%c",c[i]);
	}


}




int main (void)
{
	char c[100];
	printf ("Enter The String :");
	scanf ("%s",c);
	encode(c);
}
