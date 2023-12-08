//Wap to count total number of digits in a string 
#include <stdio.h>
int main (){
    char str [100];
    printf ("Enter the string : ");
    gets (str);
    int c=0;
    for (int i=0;str[i]!='\0';i++){
        if (str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
        c++;
    }
    printf ("%d ",c);
}