#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @size: pointer to be used
 * @c: char to be used
 * Return: pointer, NULL otherwise
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;
i = 0;
str = malloc(sizeof(*str) * size);
for (; i < size; i++)
{
str[i] = c;
}
return (str);
}
