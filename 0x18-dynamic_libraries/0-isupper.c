#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: to be checked
 * Return: 1 is true 0 otherwise
*/
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
