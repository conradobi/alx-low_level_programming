#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc - int number of arguments in the command
 * @argv - string list
 * Return: 0
 */
int main(int argc, char *argv[])
{
int count = 1;
if (argc > 1)
{
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
