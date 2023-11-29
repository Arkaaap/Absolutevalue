#include <stdio.h>
int main (){
    int n;
    printf("ENETR THE SIZE : ");
    scanf("%d",&n);
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d \n",a[i][j]);
        }

        printf ("\n");
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            int temp= a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for (int i=0;i<n;i++){
        int j=0,k=n-1;
        while (j<k){
            int temp=a[i][j];
            a[i][j] = a[i][k];
            a[i] [k] = temp;
            j++;
            k--;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d \n",a[i][j]);
        }
        printf("\n");
    }
}
return 0;
}