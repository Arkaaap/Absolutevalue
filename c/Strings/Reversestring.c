//Wap to print a reversed string 
#include <stdio.h>
int main (){
    char str [1000];
    printf ("Enter the string : ");
    gets (str);
    int i=0,j=strlen (str)-1;
    while (i<j){
        char t = str[i];
        str[i]= str[j];
        str[j]= t;
        i++;
        j--;
    }
    printf ("The reversed string of the following input string was %s ",str);
}