// FIND THE LAST INDEX AND ELEMENTS IN AN ARRAY
#include <stdio.h>
int main (){
    int ar [9]={1,2,3,4,5,5,5,8,9};
    int x=5;
    for (int i=8;i>=0;i--){
        if (ar[i]==x){
        printf ("%d is present in elemnts and the index number is : %d  ",x,i);
        break;
        }
    }
    return 0;
}
