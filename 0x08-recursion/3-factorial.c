#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: input to be used to find the factorial of a number
 * Return: the factorial of a number 0r -1 to indicate an error
*/
int factorial(int n)
{
int fact;
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
fact = n * factorial(n - 1);
return (fact);
}
