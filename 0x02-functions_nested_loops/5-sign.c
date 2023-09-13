#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 * @n: character to be checked
 * Return: 1 if is a numer, 0 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1); /*n is greater than 0*/
}
else if (n == 0)
{
_putchar('0');
return (0); /*n is equal to 0*/
}
else
{
_putchar('-');
return (-1); /*n is less than 0*/
}
_putchar('\n');
}
