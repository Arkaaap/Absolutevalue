// GIVEN A MATRIX HAVING 0-1 ONLY , FIND THE ROW WITH THE MAXIMUM NUMBER OF 1'S

//1 0 1 1 -->3

//0 1 0 1 -->2

//1 0 0 1 -->2

//THE GREATEST ROW IS 1'ST ROW ;


//#CODE 

#include <stdio.h>
int main (){
    int a[3][4];
    int maxcount = 0;
    printf("ENTER THE ELEMNTS INTO THE FOLLOWING ARRAY :\n");
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){                  //INPUT 
            scanf("%d",&a[i][j]);
        }
    }

     for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){                  //OUTPUT 
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            int count =0;
            if ( a[i][j]==1){
                count ++;
            }
            if (maxcount < count){
                maxcount=count;
            }
        }
    }
    printf("\n");
    printf("%d ",maxcount);
    return 0;

}