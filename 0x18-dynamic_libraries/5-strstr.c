#include "main.h"
#include <stdlib.h>
/**
* _strstr - locates a substring
*
* @haystack: the longer string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int x = 0;
while (needle[x] != '\0')
x++;
while (*haystack)
{
for (; needle[i]; i++)
{
if (haystack[i] != needle[i])
break;
}
if (i != x)
haystack++;
else
return (haystack);
}
return (NULL);
}
