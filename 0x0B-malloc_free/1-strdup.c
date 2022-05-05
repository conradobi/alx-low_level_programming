#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
char *mainstr;
unsigned int count, i;
/* Is str s null */
if (str == NULL)
{
return (NULL);
}
count = 0;
while (str[count] != '\0')
{
count++;
}
mainstr = malloc(sizeof(char) * (count+ 1));
if (mainstr == NULL)
{
return (NULL);
}
for (i = 0; i < count; i++)
{
mainstr[i] = str[i];
}
mainstr[count] = '\0';
return (mainstr);
}
