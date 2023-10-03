#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: string to be used
 * @s2: string to be used
 * Return: pointer, otherwise NULL
*/
char *str_concat(char *s1, char *s2)
{
char conct[50];
if( s1 == NULL)
{
return (NULL);
}
if( s2 == NULL)
{
return (NULL);
}
conct = strcpy(s1, s2);
return (conct);
}
