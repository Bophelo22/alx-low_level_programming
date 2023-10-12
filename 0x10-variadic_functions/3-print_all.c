#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
int i;
char *str, *sepertr;
va_list list;
i  = 0;
sepertr = "";
va_start(list, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sepertr, va_arg(list, int));
break;
case 'i':
printf("%s%d", sepertr, va_arg(list, int));
break;
case 'f':
printf("%s%f", sepertr, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str) str = "(nil)";
{
printf("%s%s", sepertr, str);
}
break;
default:
i++;
continue;
}
sepertr = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
