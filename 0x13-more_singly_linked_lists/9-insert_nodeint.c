#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a new node at a given position.
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *ptr,*current;
i = 0;
current = *head;
ptr = malloc(sizeof(listint_t));
if (!ptr || !head)
{
return (NULL);
}
else
{
ptr->n = n;
ptr->next = NULL;
}
if (idx == 0)
{
ptr->next = *head;
*head = ptr;
return (ptr);
}
else
{
for (; current && i < idx; i++)
{
if (i == idx - 1)
{
ptr->next = current->next;
current->next = ptr;
return (ptr);
}
else
{
current = current->next;
}
}
return (NULL);
}
}
