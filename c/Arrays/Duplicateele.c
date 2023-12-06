//FIND THE DUPLICATE ELEMENTS IN AN ARRAY ;


#include <stdio.h>
int main (){
  int a[5];
  int count =0;
  int i;
  for (int i=0;i<5;i++){
    scanf ("%d",&a[i]);
  }
  for (int i=0;i<5;i++){
    for (int j=i+1;j<5;j++){
        if (a[i]==a[j]){
            count++;
        }
    }
  }
  printf ("The duplicate elements are %d in this array  ",count );

}