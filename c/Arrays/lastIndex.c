/*find the last index of element in an array */


void Last_Index (int *a,int n,int x)
{
    for (int i=n;i>0;i--)
    
    {
        if (a[i] == x)
        {
            printf ("fOUND at %dth Time :",i);
            return;
        }
    }
    printf ("Not Found !!");
}


