#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry Point
*Return: Always 0 (Success)
*
*/
int main(void)
{
int n, x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else if (n == 0)
{
printf("Last digit of %d is %d is 0\n", n, x);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
}
return (0);
}
