#include <stdio.h>
/**
 * main -Even Liber Abbaci
 * Return: Always 0 for success
 */
int main(void)
{
long i, j, k, sum;
j = 1;
k = 2;
sum = 0;
for (; j < 44000000; ++j)
{
if ((j % 2) == 0)
{
sum = sum + j;
}
i = j + k;/*the next value is stored in i*/
j = k;
k = i;
}
printf("%lu\n", sum);
return (0);
}
