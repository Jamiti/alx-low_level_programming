#include <stdio.h>

/**
 * main - Prints  all possible combimations of single-digit numbers
 * numbers must be separated by , followed by a space
 * numbers should be printed in ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int d;

for (d = 1; d <= 9; d++)
{
putchar(d);
if (d != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
