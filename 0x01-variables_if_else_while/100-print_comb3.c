#include <stdio.h>
/**
* main - Entry point
*This probram prints all possible different combinations of two digits.
*The two digits must be different
*01 and 10 are considered the same combination of the two digits 0 and 1
*Print only the smallest combination of two digits
*Numbers should be printed in ascending order, with two digits
*You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
*You can only use putchar five times maximum in your code
*You are not allowed to use any variable of type char
*All your code should be in the main function
*
* Return: Always 0 (Success)
*/
int main(void)
{
int x, y;
 x = 48;
 y = 48;
 while (y < 58)
   {
     x = 48;
     while (x < 58)
       {
	 if (y != x && y < x)
	   {
	     putchar(y);
	     putchar(x);
	     if (x == 57 && y == 56)
	       {
		 break;
	       }
	     putchar(',');
	     putchar(',');
	   }
	 x++;
       }
     y++;
   }
putchar('\n');
return (0);
}
