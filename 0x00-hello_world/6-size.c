#include <stdio.h>
/**
 *main - Entry point
 *Retuen: Always (0)
 *
 */
int main(void)
{
char c;
int i;
float f;
long int l;
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
