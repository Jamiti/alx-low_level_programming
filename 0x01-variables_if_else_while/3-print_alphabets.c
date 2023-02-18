#include <stdio.h>
/**
 * main - Prints the alphabet in lower case
 * and then upper case
 * followed by a new line
 */

int main(void)
{
char low;

for (low = 'a'; low <= 'z'; low++)
putchar(low);

for (low = 'A'; low <= 'Z'; low++)
putchar(low);
putchar('\n');

return (0);
}

