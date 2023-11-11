//GIVE AN ARRAY OF INTEGERS,CHANGE THE VALUE OF ALL ODD INDEXED ELEMENT TO IT'S SECOND MULTIPLE AND EVEN SHOULD BE ADDED TO IT'S VALUE 10;

#include <stdio.h>
int main (){
    int ar [5]={1,2,3,4,5};
    for (int i=0;i<=4;i++){
        if (i%2!=0){
            ar[i]*=2;
        }
        else {
            ar[i]+=10;
        }
        printf("%d ",ar[i]);
    }
    return 0;
}