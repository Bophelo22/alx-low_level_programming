#include "main.h"
/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: to be used
 * Return: void
*/

void print_rev(char *s)
{
int leng = 0;
int rev;
while (*s != '\0')
{
leng++;
s++;
}
s--;
rev = leng;
for (; rev > 0; rev--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
