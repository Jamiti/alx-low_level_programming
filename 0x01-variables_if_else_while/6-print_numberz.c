#include <stdio.h>

/**
 * main -Printsall single digit numbers of base 10
 * starting from zero, followed by a new line
 *
 * Returns: Always 0 (Success)
 */

int main(void)

{

int d;

for (d = '0'; d <= '9'; d++)
putchar(d);
putchar('\n');

return (0);
}
