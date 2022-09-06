/* Exercise 1-2. Experiment to find out what happens when printf's argument string contains \c,
where c is some character.

Print statements with valid escape sequences are included in the program to illustrate the resulting output.
Some of the possible escape characters will produce comilation errors, which are detailed as comments.
*/

#include<stdio.h>

int main() 
{
    printf("hello world!\n");   // prints "Hello World!" //
    printf("hello\tworld!\n");   // prints Hello    World! //
    printf("hello \t world!\n"); // prints Hello     World! //
    printf("hello \v world!\n");   /* prints "Hello  
                                       World!" */
    printf("hello \\ world!\n");   // prints "Hello \ World!" //
    printf("hello \? world!\n");   // prints "Hello ? World!" //
    printf("hello \' world!\n");   // prints "Hello ' World!" //
    printf("hello \" world!\n");   // prints "Hello " World!" //
    // printf("hello \x World!\n");   produces a "x not followed by hexadecimal number" error
    // printf("hello \z World!\n");   produces a warning: "unknown escape sequence: '\z'" //

    return 0;
}