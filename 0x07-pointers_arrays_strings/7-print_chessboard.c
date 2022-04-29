#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *
 * @a: the row of the array
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
int i = 0, j = 0;
for (; i < 8; i++)
{
for (; j < 8; j++)
{
if (j == 7)
{
_putchar(a[i][j]);
_putchar('\n');
}
else
_putchar(a[i][j]);
}
}
}
