#include <stdio.h>

int add (int x,int y);

int add(int x,int y){
    return (x+y);
}


int main (){
   
    int x=10,y=20;
    int z;
    z=(x+y);
    printf("The sum of two integers are %d",z);
   
    
    return 0;
}