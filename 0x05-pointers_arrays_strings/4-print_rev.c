#include "main.h"

/**
 * main - prints a string in reverse
 * followed by a line
 *
 * Returns: 0
 */

void print_rev(char *s)
{
int count = 0;

while (*s)
{
s++;
count++;
}
while (count)
{
s--;
_putchar(*s);
count--;
}
_putchar('\n');
}
