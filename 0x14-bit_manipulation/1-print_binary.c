#include "main.h"
/**
* print_binary - function that prints the binary representation of a number.
* @n: the number binary to be printed
*/
void print_binary(unsigned long int n)
{
int i, j;
unsigned long int new;
i = 63;
j = 0;
for (; i >= 0; i--)
{
new = n >> i;
if (new & 1)
{
_putchar('1');
j++;
}
else if (new)
_putchar('0');
}
if (!new)
_putchar('0');
}
