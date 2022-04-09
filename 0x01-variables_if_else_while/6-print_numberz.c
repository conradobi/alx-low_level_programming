#include <stdio.h>
/**
*main - Entry point
*This program displays numbers from 0 - 9 using the putchar function.
*Return: Always 0 (Success)
*/
int main(void)
{
int numbers = '0';
while (numbers <= '9')
{
putchar(numbers);
numbers++;
}
putchar('\n');
return (0);
}
