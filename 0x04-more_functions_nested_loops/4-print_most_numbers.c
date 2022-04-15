#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
int numbers = '0';
while(numbers <= '9')
{     
if (numbers != '2' && numbers != '4')
{
_putchar(numbers);
}
numbers++;
}
_putchar('\n');
}
