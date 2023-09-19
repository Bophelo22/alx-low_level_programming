#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: to be used 
 * @n: to be used
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
