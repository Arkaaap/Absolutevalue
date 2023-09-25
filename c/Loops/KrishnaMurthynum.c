#include <stdio.h>
int main(){
    int i,n,t,sum=0,f=1,r;
    printf("Enter a number :");
scanf("%d",&n);
t=n;
while (n!=0){
    f=1;
    r=n%10;
    for (int i=1;i<=n;i++){
        f*=i;
    }
sum*=f;
n=n%10;

}
if(sum==t){
    printf("yes ");
}
else {
    printf("no");
}
return 0;
}