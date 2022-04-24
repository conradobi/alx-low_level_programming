#include "main.h"
#include <string.h>
/**
 * _strncpy - copie the string
 * @dest: defines the destnation to be copied to
 * @src: defines the source to be coppied from
 * @n: defined the number of character to be coppied from src to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
