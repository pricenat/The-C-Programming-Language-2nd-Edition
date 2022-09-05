// Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1.
// Program was tested by using Control-D the keyboard on a Linux OS to signify EOF in input.

#include <stdio.h>

int main()
{
    int c;

    printf("%d\n", (getchar() != EOF));

    return 0;
}
