#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: for grid use
 * @height: to be usef for height
 * Return: void
*/
void free_grid(int **grid, int height)
{
int i;
i = 0
for (; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
