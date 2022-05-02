#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
int count;
int multiply = 1;
if (argc != 3)
{
printf("Error\n");
return (1);
}
for (count = 1; count < argc; count++)
{
multiply = multiply * (atoi(argv[count]));
}
printf("%d\n", multiply);
return (0);
}
