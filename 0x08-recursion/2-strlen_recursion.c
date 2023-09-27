#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: input to be used to get the length
 * Return: the length of a string
*/
int _strlen_recursion(char *s)
{
int i;
if ( *s != '\0')
{
i  = 1 + _strlen_recursion(s + 1);    
}
return (i);
}
