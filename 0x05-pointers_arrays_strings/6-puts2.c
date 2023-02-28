#include "main.h"

/**
 * main - prints every other character of a string
 * starts with the first character
 * followed by a new line
 *
 * Return: 0
 */

void puts2(char *str)
{
int count = 0, i;

while (*str)
{
count++;
str++;
}

for (i = 0; i < couint; i++)
str--;

for (i = 0; i < count; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
