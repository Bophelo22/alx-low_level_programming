#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the 
 * data (n) of a dlistint_t linked list
 * @head: Head of node
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
unsigned int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}

int sum_dlistint(dlistint_t *head)
{
unsigned int sum;
sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);


}