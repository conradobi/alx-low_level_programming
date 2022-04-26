#include "main.h"
/**
 * _memset - fill memory with a constant byte
 *
 * @s: pointer to memory area to fill
 * @n: the number of bytes to fill
 * @b: constant byte
 *
 * Return: a pointer to the memory area of @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for(; i < n; i++)
s[i] = b;
return (s);
}
