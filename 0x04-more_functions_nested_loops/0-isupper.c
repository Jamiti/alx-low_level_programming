#include "main.h"

/**
 * main - checks for uppercase character
 * Returns 1 if c is uppercase
 * Returns 0 other wise
 */

int _isupper(int c)
{
char uppercase = 'A';
int isupper = 0;
for (; uppercase <= 'Z'; uppercase++)
{
if (c == uppercase)
{
isupper = 1;
break;
}
}
return (isupper);
}
