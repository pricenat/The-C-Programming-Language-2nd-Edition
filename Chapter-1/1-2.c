#include<stdio.h>

int main() {
    printf("Hello World!\n");   // prints "Hello World!" //
    printf("Hello\tWorld!\n");   // prints Hello    World! //
    printf("Hello \t World!\n"); // prints Hello     World! //
    printf("Hello \v World!\n");   /* prints "Hello  
                                       World!" */
    printf("Hello \\ World!\n");   // prints "Hello \ World!" //
    printf("Hello \? World!\n");   // prints "Hello ? World!" //
    printf("Hello \' World!\n");   // prints "Hello ' World!" //
    printf("Hello \" World!\n");   // prints "Hello " World!" //
    // printf("Hello \x World!\n");   produces a "x not followed by hexadecimal number" error
    // printf("Hello \z World!\n");   produces a warning: "unknown escape sequence: '\z'" //

    return 0;
}