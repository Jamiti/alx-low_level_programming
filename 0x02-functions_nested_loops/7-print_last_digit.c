#include "main.h"

/**
 * main -prints last digit of number
 * input number as an integer
 *
 * Return: Last digit
 */

int print_last_digit(int n)

{
int q;

q = n % 10;
if (q < 0)
{
_putchar(-q + 48);
return (-q);
}
else
{
_putchar(q + 48);
return (q);
}

}
