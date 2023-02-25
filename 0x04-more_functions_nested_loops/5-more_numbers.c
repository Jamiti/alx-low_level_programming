#include "main.h"

/**
 * main - Prints 10 times the numbers from 0 to 14
 * followed by a new line
 *
 * Returns: 0
 */

void more_numbers(void)
{
int c, d;
for (c = '1'; c <= 10; c++)
{
for (d = '0'; d < 15; d++)
{
if (d >= 10)
_putchar('1');
_putchar(d % 10 + '0');
}
_putchar('\n');
}
}

