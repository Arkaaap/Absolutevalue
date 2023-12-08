//Wap to count total number of 'I' andf 'i' in a string 
#include <stdio.h>
int main (){
    char str [100];
    printf ("Enter the string : ");
    gets (str);
    int c=0;
    for (int i=0;str[i]!='\0';i++){
        if (str[i]=='I'||str [i]=='i')
        c++;
    }
    printf ("The number of 'I' & 'i' are in a string %d  ",c);
}