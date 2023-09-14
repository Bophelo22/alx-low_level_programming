#include <stdio.h>
/**
 * main -Even Liber Abbaci
 * Return: Always 0 for success
*/
int main(void)
{
unsigned long int j, k, sum, next;
j = 1;
k = 2;
sum = 0;
int i;
for (i = 1; i <= 33; ++i)
{
if ((j < 44000000) && ((j % 2) == 0))
{
sum += j;
}
next = j + k;
k = next;
}
putchar('0' + sum);
putchar('\n');
return (0);
}
