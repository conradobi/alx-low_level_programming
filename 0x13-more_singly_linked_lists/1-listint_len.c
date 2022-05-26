#include "lists.h"

size_t listint_len(const listint_t *h)
{
  size_t new_node = 0;
  while(h != NULL)
    {
      h = h->next;
      new_node++;
    }
  return (new_node);
}
