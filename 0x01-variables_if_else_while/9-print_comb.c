#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int numSet;
numSet = 0;
while (numSet < 10)
{
putchar(48 + numSet);
if (numSet != 9)
{
putchar(' ');
}
numSet++;
}
putchar('\n');
return (0);
}
