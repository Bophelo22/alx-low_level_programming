#include <stdio.h>
/**
 * main - the start of the program
 * Return: 0 for success
*/

int main(void)
{
int i = 0;
for (; i < 16; i++)
{
if (i < 10)
{
putchar('0' + i);
}
else
{
putchar('a' + (i - 10));
}
}
putchar('\n');
return (0);
}
