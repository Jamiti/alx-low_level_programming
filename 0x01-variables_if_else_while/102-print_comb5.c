#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * should range from 0 - 99
 * the two numbers should be separated by a space
 * all numbers should be printed with two digits
 * 1 should be printed as 01
 * combinations of numbers must be separated by comma followed by a space
 * combinations of numbers should be printed in ascending order
 */

int main(void)
{
int d, p;
for (d = '0'; d < '9'; d++)
{
for (p = d + 1; p <= '9'; p++)
{
if (p != d)
{
putchar(d);
putchar(p);
if (d == '7')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);

}
