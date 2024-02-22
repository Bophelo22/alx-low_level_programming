#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list.
 * @head: struct
 * @n: int value to be used
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *list = NULL;
dlistint_t *end = *head;
list = malloc(sizeof(dlistint_t));
if (list == NULL)
{
return (NULL);
}
list->n = n;
list->prev = NULL;
list->next = NULL;

if (*head == NULL)
{
*head = list;
return (*head);
}

while (end->next != NULL)
{
end = end->next;
}
list->prev = end;
end->next = list;

return (list);
}