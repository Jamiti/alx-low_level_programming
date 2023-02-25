#include "main.h"

/**
 * main - draws straight line in the terminal
 * Where n is the number of times the character _ should be printed
 * the line should end with a \n
 * if n is 0 or less, the function should only print \n
 *
 * Return: 0
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
