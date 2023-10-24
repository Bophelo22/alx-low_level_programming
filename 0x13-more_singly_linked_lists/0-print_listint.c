#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: constant list to be used to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t size;
size = 0;
while (h != NULL)
{
printf("%u\n", h->n);
h = h->next;
size++;
}
return (size);
}
