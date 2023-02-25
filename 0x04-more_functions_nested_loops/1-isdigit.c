#include "main.h"

/**
 * main - Checks for a digit 
 * 0 through 9
 * Returns 1 if c is a digit
 * Returns 0 other wise
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
