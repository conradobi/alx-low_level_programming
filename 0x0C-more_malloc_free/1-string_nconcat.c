#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int x, y, z;
char *s;

if (s1 == NULL)
x = 0;
else
{
for (; s1[x]; x++)
;
}
if (s2 == NULL)
y = 0;
else
{
for (; s2[y]; y++)
;
}
if (y > n)
y = n;
s = malloc(sizeof(char) * (x + y + 1));
if (s == NULL)
return (NULL);
for (z = 0; z < x; z++)
s[k] = s1[k];
for (z = 0; z < y; z++)
s[z + x] = s2[z];
s[x + y] = '\0';
return (s);
}
