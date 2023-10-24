#include "lists.h"

/**
 * pop_listint - function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to a list to be used
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
listint_t *ptr;
int num;
ptr = malloc(sizeof(ptr));
if (!ptr)
{
return (0);
}
else
{
if (!*head || !head)
{
return (0);
}
else
{
num = (*head)->n;
ptr = (*head)->next;
free(*head);
*head = ptr;
}
return (num);
}
}
