#include <stdlib.h>
#include <stdio.h>
/**
 * main - display the number of arguments passed into the program
 * @argc: int
 * @argv: string lists
 * Return: 0
 */
int main(int argc, char* argv[])
{
(void)argv;
argc = argc - 1;
printf("%d\n", argc);  
return (0);
}
