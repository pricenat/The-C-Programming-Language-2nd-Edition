#include<stdio.h>

int main() {
    printf("Hello World!\n");   // prints "Hello World!" //

    /* print("Hello World!\n");     produces error during compilation, undefined reference to 'print' instead of 'printf' 
    printf(Hello World!\n");        missing front '"' symbol on "Hello World produces stray '\', missing terminating '"',  
                                    expected ';' errors and missing terminating '"' warning 

    printf("Hello World!\n";        produces expected ')' before ';' token and expected ';' before '}' token errors 
    printf"Hello World!\n");        produces expected ';' before string constant and expected statement before ')' token errors 
    printf("Hello World!\n")        produces an expected ';' before 'return' error    
    return 0                        produces expected ';' before '}' token error */

    return 0;
}