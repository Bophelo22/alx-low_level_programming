#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t list.
 * @head: pointer to the list to be used
 * @n: node to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr, *current;
current = *head;
ptr = malloc(sizeof(ptr));
if (!ptr)
{
return (NULL);
}
else
{
ptr->n = n;
ptr->next = NULL;
}
if (*head == NULL)
{
*head = ptr;
return (ptr);
}
else
{
while (current->next != NULL)
{
current = current->next;
}
current->next = ptr;
return (ptr);
}
}
