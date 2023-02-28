#include "main.h"

/**
 * main - prints n elements of an array of integers
 * followed by a new line
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
int count = 0;

while (count < n)
{
printf("%d", a[count]);

if (count != (n - 1))
printf(", ");
count++;
}
printf('\n');
}
