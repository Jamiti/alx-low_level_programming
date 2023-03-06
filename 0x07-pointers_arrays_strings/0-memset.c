#include "main.h"

/**
 * _memset - Fills the first n bytes
 * @s: Memory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return:A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
