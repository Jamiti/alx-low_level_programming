#include "main.h"

/**
 * main - prints chessboard
 * print_chessboard(char (*a)[8])
 * @a: The chessboard to be printed
 *
 * Return: the chessboard
 */

void print_chessboard(char (*a)[8])
{
int indx1, indx2;
for (indx2 = 0; a[indx1][7]; indx1++)
{
for (indx2 = 0; indx2 < 8; indx2++)
_putchar(a[indx1][indx2]);
_putchar('\n');
}
}
