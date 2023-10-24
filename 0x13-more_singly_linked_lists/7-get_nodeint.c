#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: first node in the linked list
 * @index: index of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *ptr = head;
i = 0;
while (ptr && i < index)
{
ptr = ptr->next;
i++;
}
if(ptr)
{
return (ptr);
}
else
{
return (NULL);
}
}
