//WAP TO PRINT A MATRIX 90 DEGREE CLOCKWISE 
#include <stdio.h>
int main (){
    int n;
    printf("ENETR THE N : ");
    scanf("%d",&n);
    int a[n][n];
    printf("ENTER THE ELEMNTS : \n");
    for (int i=0;i<n;i++){                          //TAKING INPUT OF THE MATRICES 
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){                  //TRANSPOSE 
            int temp=a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    printf("PRINTING TRANSPOSE .......\n");
      for (int i=0;i<n;i++){                            //PRINTING THE TRANSPOSE 
        for (int j=0;j<n;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i=0;i<n;i++){
        int j=0;                        
        int k=n-1;
        while (j<k){                            //CLOCKWISE 
            int temp = a[i][j];
            a[i][j]  = a[i][k];
            a[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("PRINTING CLOCKWISE ........\n");
       for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){                     //PRINTING THE CLOCKWISE 
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;


}