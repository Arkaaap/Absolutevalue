// Printing arryas element by taking input from user;



#include <stdio.h>
int  main (){
    int arr [5];
    for (int i =0;i<=5;i++){
        printf("\n Enter the element %d : ",i);
        scanf("%d ",&arr[i]);
    }

for (int i =0;i<=5;i++){
    printf("%d ",arr[i]);
}
return 0;

}