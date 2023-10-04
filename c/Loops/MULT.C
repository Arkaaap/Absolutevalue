
#include <stdio.h>

int main()
{
    int i, num;

    /* Input a number to print table */
    printf("Enter number to print table: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        printf("%d x %d = %d\n", num, i, (num*i));
    }

    return 0;
}



// MULTIPLICATION TABLE;