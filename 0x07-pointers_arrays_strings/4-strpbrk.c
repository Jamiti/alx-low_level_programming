#include "main.h"

/**
 * _strbrk - locates the first occurance in the string s
 * @s: string
 * @accept: input
 *
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
int a;
while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
return (s);
}
s++;
}
return ('\0');
}
