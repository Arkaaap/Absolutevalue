#include <stdio.h>
int main(){
int a,b;
printf("Put two number");
scanf("%d%d ",&a,&b);
a=a+b;//a=5+5=10
b=a-b;//10-5=5
a=a-b;//a=10-5=5
printf("number is number a=%d b=%d",a,b);

return 0;


}