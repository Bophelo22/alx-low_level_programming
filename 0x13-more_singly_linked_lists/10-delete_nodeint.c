#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index of a listint_t linked list.
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i;
listint_t *ptr, *current;
ptr = *head;
current = NULL;
i = 0;
if (*head == NULL)
{
return (-1);   
}
if (index == 0)
{
*head = (*head)->next;
free(ptr);
return (1);
}
while (i < index - 1)
{
if (!ptr || !(ptr->next))
{
return (-1);
}
ptr = ptr->next;
i++;
}
current = ptr->next;
ptr->next = current->next;
free(current);
return (1);
}
