#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: input for sqaure root
 * Return: the sqr root of n
*/

int _sqrt_recursion(int n)
{
int sqrt;
if (n < 0)
{
return (-1);
}
else if ((n == 0) || (n == 1))
{
return (n);
}
sqrt = rec_sqrt_recursion(n, 0);
return (sqrt);
}

/**
 * rec_sqrt_recursion - to find the natural number
 * @n: input to use to find the root
 * @i: input to use to find the product
 * Return: the results of square root
*/

int rec_sqrt_recursion(int n, int i)
{
if (i * i > n)
{
return (-1);
}
else if (i * i == n)
{
return (i);
}
return (rec_sqrt_recursion(n, i + 1));
}
