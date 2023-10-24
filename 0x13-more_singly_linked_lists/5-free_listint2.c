#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to a list to be used
 */
void free_listint2(listint_t **head)
{
listint_t *ptr;
ptr = malloc(sizeof(ptr));
if (!head)
{
printf("(nil)\n");
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
