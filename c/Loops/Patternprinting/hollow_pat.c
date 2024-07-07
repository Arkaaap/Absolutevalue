// HOLLOW RECTANGLE 

#include <stdio.h>
#include <stdlib.h>
void main (){
int n;
printf ("Enter the n ");
scanf ("%d",&n);

for (i=1;i<=n;i++){
for (j=1;j<=n;j++){
if (i==1 || j==1 || i==n || j==n){
printf ("* ");
}else {
printf (" ");
}
}
printf ("\n");
}

getch ();
}
