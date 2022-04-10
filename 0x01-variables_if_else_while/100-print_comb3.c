#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x, y;
x = 48;
y = 48;
while (y < 58)
{
x = 48;
while (x < 58)
{
if (y != x && y < x)
{
putchar(y);
putchar(x);
if (x == 57 && y == 56)
{
break;
}
putchar(',');
putchar(' ');
}
x++;
}
y++;
}
putchar('\n');
return (0);
}
