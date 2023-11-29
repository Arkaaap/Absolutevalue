//WAP TO FIND OUT ALL THE DULPICATE ELEMENTS IN AN ARRAY [W3RESOURCE]
#include <stdio.h>
int main (){
    int a[5];
    int duplicate = 0;
    for (int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if (a[i]==a[j]){
                duplicate ++;
            }
        }
    }
    printf ("The duplicate elemnts in this following array are : %d ",duplicate);
    return 0;
}