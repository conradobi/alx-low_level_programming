#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char* agrv[])
{
/** int i = 0;

  if (agrc >= 1)
    {
      for ( i = 0; i <= agrc; i++)
	{
	  printf("%s", agrv[i]);
	}
    }else
    {
      printf("The command has no other arguments");
    }
*/
  printf("%s\n", agrv[0]);
  return (0);
}
