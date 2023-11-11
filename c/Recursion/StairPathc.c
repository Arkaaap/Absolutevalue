#include <stdio.h>
int Stair (n){
   { if (n<=3) 

            return n;}
    int Ansrecursely = Stair (n-1) + (n-2) + (n-3) ;
    return Ansrecursely;
}
int main (){
    int n;
    printf("Enter the stair nums : ");
    scanf("%d",&n);
    int totstair= Stair(n);
    printf("Your %d stair is %d", n,totstair);
    return 0;
}



// STAIR COUNT USING RECURSION ;














