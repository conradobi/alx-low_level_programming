#include <stdio.h>
/**
* main - Entry point
* Program to display the alphabets in lower case
*Return: Always 0 (Success)
*/
int main(void)
{
int number;
number = 0;
while (number <= 9)
   /*for (number = 0; number <= 9; number++)*/
{
printf("%d", number);
number++;
}
printf("\n");
return (0);
}
