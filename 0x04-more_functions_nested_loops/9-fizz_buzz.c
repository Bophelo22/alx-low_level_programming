#include "main.h"
#include <stdio.h>
/**
 * main - Fizz-Buzz
 * Return: Always 0
 */
int main()
{
int i = 1;
for (; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
if (i % 3 != 0 && i % 5 != 0)
{
printf("%d", i);
}
if (i < 100)
{
printf(" ");
}
}
printf("\n");
return 0;
}
