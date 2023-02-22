#include "main.h"

/**
 * main - Prints the sign of a number
 * Returns 1 and prints + if number is greater than 0
 * REturns 0 and prints 0 if number is 0
 * Returns -1 and prints - if number is less than 0
 */

int print_sign(int n)

{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}

}

