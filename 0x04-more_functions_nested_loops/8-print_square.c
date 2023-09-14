#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: to be used
 * Return: nothng to be returned
 */
void print_square(int size)
{
if (size > 0)
{
int i = 0;
for (; i < size; i++)
{
int j = 0;
for (; j < size; j++)
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
