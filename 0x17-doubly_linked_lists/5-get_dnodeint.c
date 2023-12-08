#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list.
 * @head: pointer to head node
 * @index: he index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int counter = 0;
if (head == NULL)
{
return (NULL);
}
while (head != NULL)
{
if (index == counter)
{
return (head);
}
counter++;
head = head->next;
}
return (NULL);
}
