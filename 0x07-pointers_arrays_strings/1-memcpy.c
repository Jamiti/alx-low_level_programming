#include "main.h"

/**
 * _memcpy - copies n bytes from memory area
 * @n: number of bytes
 * @src: memory area from which n bytes are copied
 * @dest: memory area at which pointer is returned
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
