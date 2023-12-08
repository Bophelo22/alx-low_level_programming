#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index index of a dlistint_t linked list.
 * @head: Head of node
 * @index: he index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *node;
unsigned int counter;
if (*head == NULL)
return (-1);
node = *head;
if (index == 0)
{
*head = node->next;
if (node->next != NULL)
{
node->next->prev = NULL;
}
free(node);
return (1);
}
for (counter = 0; node != NULL && counter < index - 1; counter++)
{
node = node->next;
}
if (node == NULL || node->next == NULL)
{
return (-1);
}

if (node->next->next != NULL)
{
node->next = node->next->next;
free(node->next->prev);
node->next->prev = node;
return (1);
}
else
{
free(node->next);
node->next = NULL;
return (1);
}
return (-1);
}
