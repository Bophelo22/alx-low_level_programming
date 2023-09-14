#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 * @void: nothing to be used
 * Return: this function returns nothing
 */
void more_numbers(void)
{
int i;
int count;
count = 0;
while (count < 10)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar('0' + (i / 10));
}
_putchar('0' + (i % 10));
}
_putchar('\n');
count++;
}
}
