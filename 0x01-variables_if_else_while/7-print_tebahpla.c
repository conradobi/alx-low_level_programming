#include <stdio.h>
/**
* main - Entry point
* This progrm would display lowercase alphabetsin reverse order
* Return: Always 0 (Success)
*/
int main(void)
{
char alphabets;
for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
{
putchar(alphabets);
}
putchar('\n');
return (0);
}
