#include <stdio.h>
#include <stdlib.h>

void fun ()
{
    fprtintf ("I'm printing using function pointer in c ") ;
}  



int main ()
{
   void (*exec) () = (void(*)()) fun ; // Synatax :return type * pointer (arguemenets if any)  = dereferncing : (return type * (arguements if any ) ) function name ();
    exec ();
    return (0);
}
