#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *current_node;
int x;
if (head == NULL)
return (0);
current_node = *head;
if (current_node == NULL)
return (0);
x = current_node->n;
*head = current_node->next;
free(current_node);
return (x);
}
