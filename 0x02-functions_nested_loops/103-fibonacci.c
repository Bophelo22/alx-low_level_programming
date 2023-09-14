#include <stdio.h>
/**
 * main -Even Liber Abbaci
 * Return: Always 0 for success
*/
int main(void)
{
int i;
long j, k, sum, next;
j = 1;
k = 2;
sum = 0;
for (k = 1; k <= 33; ++k)
{
if (((j < 44000000) && (j % 2) == 0))
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
