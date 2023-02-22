#include "main.h"
/**
 * main -Print the alphabet
 * in lower case
 * followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
int q;
for (q = 'a'; q <= 'z'; q++)
{
_putchar(q);
}
_putchar('\n');
}
