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

  printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
  printf("Size of a integer: %lu byte(s)\n",(unsigned long)sizeof(i));
  printf("Size of a long long int: %lu byte(s)\n",(unsigned long) sizeof(l));
  printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
  return (0);
}
