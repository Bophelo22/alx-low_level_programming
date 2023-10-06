#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of members is array
 * @size: size of the elemens in array
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pointr;
unsigned int i, sizeArray;
i = 0;
sizeArray = nmemb * size;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
pointr = malloc(sizeArray);
if (pointr == NULL)
{
return (NULL);
}
for (; i < sizeArray; i++)
{
pointr[i] = 0;
}
return (pointr);
}
