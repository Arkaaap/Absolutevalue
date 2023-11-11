// #include <stdio.h>
// int main (){
//     int arr[5]={1,2,3,4,5},i;
//     int sum =0;
//     for (i =0;i<=4;i++){
//         sum+=i;
//         }
//     printf("%d",sum);
//     return 0;
// }


//Printing sum of an element 



#include <stdio.h>
int main (){
    int arr[5] ,i;
    int sum =0;
    for (i =0;i<=4;i++){
        scanf("%d",&arr[i]);
        }
    for (i=0;i<=4;i++){
        sum +=arr[i];
        printf("%d",sum);
    }
    return 0;
}