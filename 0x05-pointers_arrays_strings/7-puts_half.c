#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: to be used
 * Return: void
 */
void puts_half(char *str)
{
int i;
int j;
int k;
k = 0;
i = 0;
for (; str[i] != '\0'; i++)
{
k++;
}
j = (k / 2);
if ((k % 2) == 1)
{
j = ((k + 1) / 2);
}
i = j;
for (; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
