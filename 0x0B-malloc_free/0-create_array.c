#include <stdlib.h>
/**
  *create_array - creates an array of chars and initializes it with
  *a specific char.
  *@size: size of array.
  *@c: char to initialize array with.
  *
  *Return: NULL if it fails or
  *Pointer to array.
  */
char *create_array(unsigned int size, char c)
{
unsigned int count = 0;
char *array;
if (size == 0)
{
return (NULL);
}
array = malloc(sizeof(char) * size);
if (array == NULL)
{
return (NULL);
}
while (count < size)
{
array[count] = c;
}
return (array);
}
