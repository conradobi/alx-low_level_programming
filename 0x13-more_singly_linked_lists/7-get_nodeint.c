#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of linked list
 * @index: node index to return
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current_node;
if (head == NULL)
return (0);
current_node = head;
while (index != 0)
{
current_node = current_node->next;
index--;
if (current+node == NULL)
return (0);
}
return (current);
}
