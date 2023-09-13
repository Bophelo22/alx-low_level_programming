#include "main.h"
/**
 * print_times_table - function that prints the n
 * @n: to be used
 * Return: this functin returns nothing
 */
void print_times_table(int n)
{
if ((n < 0) || (n > 15))
{
return;
}
else
{
int i;
for (i = 0; i < n; i++)
{
int j;
for (j = 0; j < n; j++)
{
int result;
result = i * j;
if (result < 10)
{
_putchar('0' + result);
}
else
{
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
if (j < n)
{
_putchar(',');
_putchar(' '); 
}
}
_putchar('\n'); 
}
}
}
