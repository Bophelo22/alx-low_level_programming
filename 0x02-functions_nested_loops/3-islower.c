#include "main.h"
#include "_putchar.c"
/**
 * main -  islower
 * Return: 0 for success
 */

int main(void)
{
int r;
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
/**
 * _islower - function checks if a character is lowercase
 * @c: The character to be check
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
