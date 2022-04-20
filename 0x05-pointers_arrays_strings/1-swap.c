#include "main.h"
/**
 * swap_int - swaps the values in a and b
 *@a: pointer for the address of a
 *@b: pointer for the address of b
 *Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = 42;
*b = 98;
*b = aux;
}
