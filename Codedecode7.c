/*SOURCE :hitbullseye.com Author : Arkaaap
    In a certain code 'SEQUENCE' is coded as 'FDOFVRFT. How is 'CHILDREN' coded in that code?

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encode (char *c)
{
	fprintf (stdout,"Encoding...\n");
	fprintf (stdout,"Encoded String :\n");
	int l = strlen(c);
	for (int i=l ; i>=0; i--)
	{
	    if (c[i]>='A' && c[i]<='Z')
	    {
		printf ("%c",c[i]+1);
	}
	}


}




int main (void)
{
	char c[100];
	printf ("Enter The String :");
	scanf ("%s",c);
	encode(c);
}
