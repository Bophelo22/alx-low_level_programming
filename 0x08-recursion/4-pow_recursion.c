#include "main.h"
/**
 * _pow_recursion - function that returns the
 * value of x raised to the power of y.
 * @x: base input
 * @y: exponential input
 * Return: the power of two numbers 04 -1
*/
int _pow_recursion(int x, int y)
{
int pow;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
pow = x * _pow_recursion(x, y - 1);
return (pow);
}
