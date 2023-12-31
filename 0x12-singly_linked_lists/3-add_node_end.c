#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
list_t *tmpNode = *head;
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
node->next = NULL;

if(*head == NULL)
{
*head = node;
return (node);
}
while(tmpNode->next != NULL)
{
tmpNode = tmpNode->next;
}
tmpNode->next = node;
return (node);
}
