#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: pointer to list to be used
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
int sum;
listint_t *ptr;
sum = 0;
ptr = head;
if (!ptr)
{
return (0);
}
else
{
while (ptr)
{
sum += ptr->n;
ptr = ptr->next;
}
return (sum);
}
}
