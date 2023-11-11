/*#include<stdio.h>
int main (){
    char myName;
    char myChar;
    int myNum;
    int myCollege;
    printf("PUt your name , character , number , college :");

    scanf("%c %c %d %d ",&myName , &myChar ,&myNum ,&myCollege);

    printf("Your name is :%s",myName);
     printf("Your  character is  :%c",myChar);
      printf("Your number is :%d",myNum);
       printf("Your college is :%s",myCollege);

       return 0;


}*/


#include<stdio.h>
int main (){
    char myName;
    char myCharatcter;
    int myNuM;
    char myCollege;

    printf("Put your name  ");
    scanf("%s",&myName);
    printf("Put your character ");
    scanf("%s",&myCharatcter);
     printf("Put your number ");
scanf("%d",&myNuM);
      printf("Put your college name  ");
   scanf("%s",&myCollege);
   printf("The result is :%s%s%d%s",myName,myCharatcter,myNuM,myCollege);
    return 0;




}