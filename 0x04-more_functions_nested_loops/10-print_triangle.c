#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @n: to be used
 * Return: nothing will be returned
 */
void print_triangle(int size)
{
if (size > 0)
{
int i = 1;
for (; i <= size; i++)
{
int j = 1;
int k = 1;
for (; j <= size - i ; j++)
{
_putchar(' ');
}
for (; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
