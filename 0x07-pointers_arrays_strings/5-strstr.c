#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * @haystack: string
 * @needle: substring
 *
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *1 = haystack;
char *a = needle;
while (*1 == *a && *a != '\0')
{
1++;
a++;
}
if (*a == '\0')
return (haystack);
}
return (0);
}
