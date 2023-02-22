#include "main.h"

/**
 * main - Print 10 times the alphabet
 * in lower case
 * followed by a new line
 *
 *Return: Always 0
 */

void print_alphabet_x10(void)
{
int ten;
char q;

for (ten = 0; ten <= 9; ten++)
{
for (q = 'a'; q <= 'z'; q++)
_putchar(q);
_putchar('\n');
}
}
