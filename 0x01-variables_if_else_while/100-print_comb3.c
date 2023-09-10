#include <stdio.h>
/**
 * main - the start of the execution
 * Return: 0 for success
 */
int main(void)
{
int i = 0;
int j;
for (; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{
putchar('0' + i);
putchar('0' + j);
if ((i != 8) || (j != 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
