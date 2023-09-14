#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: to be used
 * Return: nothing to be returned
 *
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i = 1;
for (; i <= n; i++)
{
int j = 1;
for (; j <= i; j++)
{
if (j == i)
{
_putchar('\\');
} else
{
_putchar(' ');
}
}
_putchar('\n');
}
    
} else
{
_putchar('\n');
}
}
