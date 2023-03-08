#include "main.h"
#include <math.h>

/**
 * sqrt2 - Makes possible to evaluate rom 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: on success 1
 * on error, -1 is returned and errno is set appropriately
 */

int sqrt(int a, int b)
{
if (b * b == a)
return (b);

else if (b * b > a)
return (-1);
return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: if n has a natural square root
 * and -1 if n does not have a natural sqare root
 */

int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}
