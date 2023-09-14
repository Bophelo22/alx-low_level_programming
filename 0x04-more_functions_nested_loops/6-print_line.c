#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal.
 * @n: to be used
 * Return: this function returns nothing
 */
void print_line(int n)
{
int i = 0;
if (n > 0)
{
for (; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
