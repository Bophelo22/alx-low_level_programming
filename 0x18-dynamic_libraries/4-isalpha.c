#include "main.h"
/**
 * _isalpha - function checks if c is alpha
 * @c: character to be checked
 * Return: 1 if succesful, 0 otherwise
*/
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
{
return (1); /* c is lowercase */
}
else
{
return (0); /* c is not lowercase */
}
_putchar('\n');
}
