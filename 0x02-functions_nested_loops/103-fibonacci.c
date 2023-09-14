#include <stdio.h>
/**
 * main -Even Liber Abbaci
 * Return: Always 0 for success
 */
int main(void)
{
long j, k, sum, next;
j = 1;
k = 2;
sum = 0;
for (; j < 44000000; ++j)
{
if ((j % 2) == 0)
{
sum = sum + j;
}
next = j + k;
j = k;
k = next;
}
printf("%lu\n", sum);
return (0);
}
