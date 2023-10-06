#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: to be used for min numb n array
 * @max: to be used for max numb n array
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *numbs, i, sizeArray;
i = 0;
if (min > max)
{
return (NULL);
}
sizeArray = max - min + 1;
numbs = malloc(sizeof(*numbs) * sizeArray);
if(numbs == NULL)
{
return (NULL);
}
for (; min <= max; i++)
{
numbs[i] = min++;
}
return (numbs);
}
