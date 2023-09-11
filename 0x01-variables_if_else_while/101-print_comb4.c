#include <stdio.h>
/**
 * main - the start of the execution
 * Return: 0 for success
 */

int main(void)
{
int i = 0;
for (; i <= 9; i++)
{
int j = i + 1;
for (; j <= 9; j++)
{
int k = j + 1;
for (; k <= 9; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if ((i != 9) || (j != 9) || (k != 9))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
