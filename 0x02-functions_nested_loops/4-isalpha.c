#include "main.h"
#include "_putchar.c"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;
r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108);
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}
/**
 * _isalpha - function checks if c is alpha
 * @c: character to be checked
 * Return: 1 if succesful, 0 otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a') && (c <= 'z') || (c >= 'A') && (c <= 'Z'))
{
return (1); /* c is lowercase */
}
else
{
return (0); /* c is not lowercase */
}
_putchar('\n');
}
