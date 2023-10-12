#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguements to be sent
 * Return: the sum of arguments, otherwise 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arrParam;
unsigned int i, sum;
va_start(arrParam, n);
i = 0;
sum = 0;
for (; i < n; i++)
{
sum += va_arg(arrParam, int);
}
va_end(arrParam);
return (sum);
}
