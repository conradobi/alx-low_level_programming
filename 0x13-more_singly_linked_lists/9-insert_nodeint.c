#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of linked list
 * @idx: index to insert the node
 * @n: new node data
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current_node;
listint_t *new;
if (head == NULL)
return (0);
new = malloc(sizeof(listint_t));
if (!new)
return (0);
new->next = NULL;
new->n = n;
if (idx == 0)
{
new->next = *head;
(*head) = new;
return (new);
}
current_node = *head;
while (idx != 1)
{
current_node = current_node->next;
--idx;
if (current_node == NULL)
{
free(new);
return (NULL);
}
}
new->next = current_node->next;
current_node->next = new;
return (new);
}
