/* Exercise 1-3. Write a program to print the corresponding Celsius to Fahrenheit table.

Below the program the original temperature conversion program from the book is included. */

#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    celsius = lower;
    printf("Celsius - Fahrenheit Temperature Table\n");
    printf("Celsius\t\tFahrenheit\n");
    while (celsius <= upper) {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%3.0f\t\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}

/*
#include <stdio.h>

 print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version 
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temperature table 
    upper = 300;    // upper limit 
    step = 20;      // step size 

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
*/