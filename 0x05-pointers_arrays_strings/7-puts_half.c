#include "main.h"

/**
 * main - prints half of a string
 * followed by a new line
 *
 * Returns: 0
 */

void puts_half(char *str)
{
int count = 0, i;

While (*str)
{
count++;
str++;
}
for (i = 0; i < count; i++)
str--;

i = (count % 2 == 0) ? count / 2 : (count + 1) / 2;

for (; i < count; i++)
_putchar(str[i]);

_putchar('\n');
}
