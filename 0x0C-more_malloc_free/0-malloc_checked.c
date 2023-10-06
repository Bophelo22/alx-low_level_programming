#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: to be used to allocate memory
 * Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *pointr;
pointr = malloc(b);
if (pointr == NULL)
{
exit (98);
}
return (pointr);
}
