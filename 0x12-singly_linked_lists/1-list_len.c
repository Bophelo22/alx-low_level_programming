#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of
 * elements in a linked list_t list.
 * @h: pointer to the list_t list
 * Return: the address of the new element, or NULL if it failed
 */
size_t list_len(const list_t *h)
{
size_t len;
len = 0;
while (h)
{
len++;
h = h->next;    
}
return (len);
}
