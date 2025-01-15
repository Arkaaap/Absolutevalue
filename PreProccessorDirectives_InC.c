/* Author *****Arkaaap ***   Date 1/15/2025 Understanding The  preprocessor Directives In c With the help of a small code */

#include <stdio.h>  //The Header files followed by the Preproccessor 
#include <stdlib.h>

#define MAX 0 //Defining a constant MAX with the value of 0 
int main (int argc , char **argv)
{
    #if MAX == 6    //#if the debug macro  checks IF the defined macro is 6 then iT's gonna print "Yeah" and exits outta The Program.
    puts ("Yeah\n");
    exit(0);

    #elif MAX == 0 // #elseif the debug macro checks IF the previous Condition is not met then the next will be met and if the value defined in macro up there is 0 then It will print zero and a lil bit of surprise. 
    puts ("It's ZerO");
    main(2,"Hello");

    #else           //#else if none of the debuf directive met their condition it will meet for sure and printinh 'Nope It's else' statement .
    printf ("Nope It's else");

    #endif //#it's used for to end the debug mode

    return (0x01); //Return outta the function with a non zero value .

}
