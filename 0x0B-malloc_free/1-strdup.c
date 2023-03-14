#include <stdlib.h>
#include "main.h"

/**
 * *_strdup() - returns a pointer to a new string
 * new string is a duplicate of the string str
 * @str: string to be duplicated
 *
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer to duplicate string
 * it returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
char *duplicate;
unsigned int i, len;
i = 0;
len = 0;
if (str == NULL)
return(NULL);
while (str[len])
len++;
duplicate = malloc(sizeof(char) + (len + 1));
if (duplicate == NULL)
return (NULL);
while ((duplicate[1] = str[1] != '\0')
1++;
return (dulicate);
}
