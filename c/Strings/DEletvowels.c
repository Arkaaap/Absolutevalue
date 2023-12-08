//Wap to print and a string after deleteing all vowels 
#include <stdio.h>
int main (){
    char str [100];
    printf ("Enter the string : ");
    gets (str);
    int c=0;
    for (int i=0;str[i]!='\0';i++){
        if (str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='U'||str[i]=='u')
        c++;
    }
    for (int j=0;str [j]!='\0';j++){
        str [j]= str [j+1];
    }
    printf ("%s After deleteing all vowels  ",str);
}