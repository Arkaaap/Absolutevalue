//ONE TO 100 EXCEPT ONE ELEMENT IS MISSING FROM THIS RANGE . FIND THE MISSING ELEMENT 

#include <stdio.h>
int main (){
    int ar [100];
    int sum =0;
    for (int i=0;i<=99;i++){
        printf("Enter the number : ");
        scanf("%d ",& ar[i]);
    }

    for (int i=0;i<=99;i++){
        sum+=ar[i];
    }
    int sumN=100*(100+1)/2;
    sumN-sum;
    return 0;

}


//ITS NOT EVEN COMPLETED YET 