#include "lists.h"


print_listint(const listint_t *h)
{
  while(h != NULL)
    {
      printf("%d", h->new);
      h++;


    }
}
