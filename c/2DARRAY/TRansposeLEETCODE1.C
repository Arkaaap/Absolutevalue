// WAP IN C TO PRINT A TRANSPOSE OF THE MATRIX ENETERED BY THE USER 

// WHAT IS TRANSPOSE ? HERE IS A PICTORIAL FORM OF TRANSPOSE 

//1. 1 2 3                          //2.(TRANSPOSE ) 1    4
                                                      
 //  4 5 6                                           2    5
                              
 //                                                  3    6



 #include <stdio.h>
 int main (){
    int a [2][3]={1,2,3,4,5,6};
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){                               //PRINTEING THE ARRAY 
            printf("%d ",a[i][j]);     
        }
        printf("\n");
    }
printf("\n");
printf("\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<2;j++){                              //PRINTING TRANSPOSE OF THE FOLLOWING MATRIX
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
 }