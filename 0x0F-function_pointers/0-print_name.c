#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints a name.
 * @name: the name to be printed
 * @f(): a pointer func
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
void (*f_ptr)(char *);
f_ptr = f;
if ((name != NULL) && (f != NULL))
{
f_ptr(name);
}
else
{
return;
}
}
