#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9, followed by a new line.
 * Return: this function returns nothing
*/
void print_most_numbers(void)
{
int i = 0;
for (; i < 10; i++)
{
if((i != 2) && (i != 4))
{
_putchar('0' + i);
}

}
_putchar('\n');
}
