#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str_ptr;
unsigned int i;
i = 0;
va_start(strings, n);
for (; i < n; i++)
{
str_ptr = va_arg(strings, char *);
if (str_ptr == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str_ptr);
}
if (i != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(strings);
}
