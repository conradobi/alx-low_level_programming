#include "lists.h"
/**
 * *add_nodeint - adds a node to a linked list head
 * @head: linked list head
 * @n: int element of the linked list
 * Return: number of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nw_node;
nw_node = (listint_t *)malloc(sizeof(listint_t));
if (nw_node == NULL)
{
free(nw_node);
return (NULL);
}
nw_node->n = n;
nw_node->next = *head;
*head = nw_node;
return (nw_node);
}
