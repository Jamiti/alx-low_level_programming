#include "main.h"

/**
 * prints a string
 * followed by a new line
 * to stdout
 *
 * Return: 0
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
