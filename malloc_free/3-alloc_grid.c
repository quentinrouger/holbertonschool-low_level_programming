#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
***alloc_grid - unction that returns a pointer to
*a 2 dimensional array of integers.
*@width: width of grid
*@height: height of grid
*Return: pointer or NULL
*/
int **alloc_grid(int width, int height)
{
int i, j, **grid;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
free(grid);
return (NULL);
}
i = 0;
while (i < height)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (i--; i >= 0; i--)
free(grid[i]);
free(grid);
return (NULL);
}
j = 0;
while (j < width)
{
grid[i][j] = 0;
j++;
}
i++;
}
return (grid);
}
