/*COPY-->BNOX "SIMPLE (-1) FROM THE GIVEN STRING {(C-1)= B + (0-1)= N and so on...}*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encode (char *c)
{
  int l= strlen(c);
  char *c1 = (char*) malloc(l+1);
  for (int i=0 ;i<l;i++)
  {
  c1[i] = c[i]-1;

  }
  c1[l] = '\0';
  printf ("%s ",c1);
  free (c1);

  return ;

}


int main (void)
{
    char c[100];
    printf ("Enter The string :");
    scanf ("%s",c);
    encode (c);
    return (x001-1);

}
