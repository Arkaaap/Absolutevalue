//IF AN ARRAY CONTAINS 'N' ELEMENTS THEN CHECK IF THE GIVEN ARRAY IS A PALINDROME OR NOT ;

#include <stdio.h>
void palindrome (int n){
    for (int i=0,j=4;i<j;i++,j--){
        if (i!=j)
        printf("Plaindrome : ");
        else 
        printf("Not ");
        break;
    }
    return ;
}

int main (){
    int ar [5]={1,2,3,2,1};
    palindrome (ar);
    for (int i=0;i<=4;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}