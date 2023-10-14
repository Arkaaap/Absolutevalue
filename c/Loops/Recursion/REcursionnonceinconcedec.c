// #include <stdio.h>
// int decrrincc(int n){
// if (n==0) return ;
// printf("%d\n",n);
// decrrincc(n-1);
// printf("%d\n",n);
// return;}
// //This is a code of recursively increasing and decreasing value 
// int main (){
// int n;
// printf("Enter the number ");
// scanf("%d",&n);
// int decinc=decrrincc(n);
// return 0;
// }




// #include <stdio.h>
// int decrrincc(int n){
// if (n==0) return ;

// decrrincc(n-1);
// printf("%d\n",n);
// return;}
// //This is a code of recursively increasing  value 
// int main (){
// int n;
// printf("Enter the number ");
// scanf("%d",&n);
// int decinc=decrrincc(n);
// return 0;
// }




#include <stdio.h>
int decrrincc(int n){
if (n==0) return ;
printf("%d\n",n);
decrrincc(n-1);

return;}
//This is a code of recursively decreasing value 
int main (){
int n;
printf("Enter the number ");
scanf("%d",&n);
int decinc=decrrincc(n);
return 0;
}
