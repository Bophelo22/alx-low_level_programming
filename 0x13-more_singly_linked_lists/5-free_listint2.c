#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to a list to be used
 */
void free_listint2(listint_t **head)
{
listint_t *ptr;
if (head == NULL)
{
return;
}
else
{
while (*head)
{
ptr = (*head)->next;
free(*head);
*head = ptr;
}
*head = NULL;
}
}
