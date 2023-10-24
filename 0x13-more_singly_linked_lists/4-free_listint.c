#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function that frees a listint_t list.
 * @head: pointer to a list to be used
 */
void free_listint(listint_t *head)
{
listint_t *ptr;
ptr = malloc(sizeof(ptr));
if (!ptr)
{
return;
}
else
{
while (!head)
{
ptr = head->next;
free(head);
head = ptr;
}
}
}
