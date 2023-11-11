// FIND THE FIRST INDEX AND ELEMENT NO 

#include <stdio.h>
int main (){
    int ar [9]= {1,2,3,4,5,5,5,8,9};
    int x=5;
    for (int i=0;i<=8;i++){
        if (ar[i]==x){
            printf("%d is present in this array and the index number is : %d ",x,i);
            break;
        }
    }
    return 0;
}