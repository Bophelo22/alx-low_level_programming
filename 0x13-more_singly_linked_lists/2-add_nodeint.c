#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node at the beginning of a listint_t list.
 * @head: pointer to a list to be used
 * @n: the node to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ptr;
ptr = malloc(sizeof(listint_t));
if (!ptr)
{
return (NULL);
}
else
{
ptr->n = n;
ptr->next = *head;
*head = ptr;
}
return (ptr);
}
