/* Exercise 1-1. Run the "hello, world" program on your system. Experiment with leaving out parts of the program,
to see what error messages you get.

Included are several examples of a printf expression missing a character as well as comments describing
the resulting compilation errors.
*/

#include<stdio.h>

int main() {
    printf("hello world!\n");   // prints "hello world" //

    /* print("hello world\n");     produces error during compilation, undefined reference to 'print' instead of 'printf' 
    printf(hello world\n");        missing front '"' symbol on "Hello World produces stray '\', missing terminating '"',  
                                   expected ';' errors and missing terminating '"' warning 

    printf("hello world\n";        produces expected ')' before ';' token and expected ';' before '}' token errors 
    printf"hello world\n");        produces expected ';' before string constant and expected statement before ')' token errors 
    printf("hello world\n")        produces an expected ';' before 'return' error    
    return 0                       produces expected ';' before '}' token error */

    return 0;
}