#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: to be used for width
 * @height: to be used for height
 * Return: 2 dimentional
*/
int **alloc_grid(int width, int height)
{
int **dimen;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
dimen = malloc(sizeof(int *) * height);
if (dimen == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
dimen[i] = malloc(sizeof(int) * width);
if (dimen[i] == NULL)
{
for (; i >= 0; i--)
free(dimen[i]);
free(dimen);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
dimen[i][j] = 0;
}
return (dimen);
}
