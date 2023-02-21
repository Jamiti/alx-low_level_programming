#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times
 */

void print_alphabet_x10(void)
{

int d;

char a;

for (d = 0; d <= 9; d++)
{
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}
}
