#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: Head dlistint_t
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
unsigned int counter = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
