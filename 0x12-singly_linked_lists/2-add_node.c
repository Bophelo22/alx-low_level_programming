#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: double pointer to the list_t list
* @str: new string to add in the node
* Return: the address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
unsigned int len = 0;
while (str[len])
{
len++;
}
node = malloc(sizeof(node));
if (!node)
{
return (NULL);
}
node->str = strdup(str);
node->len = len;
node->next = (*head);
(*head) = node;
return (*head);
}
