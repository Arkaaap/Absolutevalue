//PRE IN POST PROGRAM USING RECURSION 
#include <stdio.h>
void preInpost (int n){
    if (n==0)
    return ;
    else {
        printf("%d pre \n",n);
        preInpost(n-1);
        printf("%d In \n",n);
        preInpost(n-1);
        printf("%d post \n",n);
        return ;
    }
}
int main (){
    int n;
    printf("Enetr the n : ");
    scanf("%d ",&n);
    preInpost(n);
    return 0;
}