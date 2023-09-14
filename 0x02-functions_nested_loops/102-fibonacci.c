#include <stdio.h>

/**
 * main - print in main
 * Return: Always 0 for success
*/
int main(void)
{
int count;
unsigned long fb1, fb2, sum;
fb1 = 0;
fb2 = 1;
sum = 0;
for (count = 0; count < 50; count++)
{
sum = fb1 + fb2;
printf("%lu", sum);
fb1 = fb2;
fb2 = sum;
if (count == 49)
{
printf("\n");
}
else
{
printf(",");
}
}
return (0);
}
