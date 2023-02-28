#include "main.h"

/**
 * main - swapsthe value of two integers
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int n;

n = *a;
*a = *b;
*b = n;
}
