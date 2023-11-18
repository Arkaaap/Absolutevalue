#include <stdio.h>
#include <string.h>
int main (){
    struct person {
        int salary;
        char name [50];
        int age ;
    };
    
    struct person first ;
    first . age =30;
    strcpy (first.name,"RAGHAV");
    
    struct person second ;
    second.age = 25 ;
    printf ("%s\n",first.name);
    printf("%d ",second.age);
    return 0;
}