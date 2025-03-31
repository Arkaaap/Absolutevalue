/*AUTHOR :- ARKAAAP
FIND THE FIRST INDEX OF AN ELEMENT X WHICH IS PRESENT IN AN ARRAY 
DATE 3/31/25 */

void index_first (int *a,int n,int x)
{
    for (int i=0;i<n;i++)
    
    {
        if (a[i] == x)
        {                                                  
            printf ("fOUND at %dth Time :",i);      //IN ORDER TO GET THE FIRST OCCURENCE OF A VALUE WE ARE GONNA RETURN OUT OF THE FUNCTION AS SOON WE GET THE FIRST OCCURENCE OF AN ARBITARY VALUE AND SIMPLY RETURN SO ITT WON'T TOUCH ANY OTHER CODE SEGMENT AFTER THAT .
            return;
        }
    }
    printf ("Not Found !!");
}
