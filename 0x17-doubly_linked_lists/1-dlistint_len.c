#include "lists.h"

/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list.
 * @h: Head
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
unsigned int counter = 0;
const dlistint_t *list;
list = malloc(sizeof(dlistint_t));
list = h;
if (list == NULL)
{
return (0);
}
while (list)
{
list = list->next;
counter++;
}
return (counter);
}
