#include <stdio.h>
int main (){
    char a;
    a='A';
    printf("Enter the characters from a to z :");
    for(a='A';a<='Z';++a);
    printf("%d",a);
    return 0;
}