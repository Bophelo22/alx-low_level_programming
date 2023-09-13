#include "main.h"
#include "_putchar.c"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_to_98(0);
print_to_98(98);
print_to_98(111);
print_to_98(81);
print_to_98(-10);
return (0);
}
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: to be used
 * Return: this function returns nothing
*/
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
_putchar('0' + i);
if (i < 98)
{
_putchar(',');
_putchar(' ');
}
}
}
else
{
for (i = n; i >= 98; i--)
{
_putchar('0' + i);
if (i > 98)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
