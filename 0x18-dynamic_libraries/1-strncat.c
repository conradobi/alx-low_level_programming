#include "main.h"
#include <string.h>
/**
 *_strncat - concarenates two strings
 *@dest: input parameter string
 *@src: input parameter string
 *@n: number of string to concatenate with from src
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
