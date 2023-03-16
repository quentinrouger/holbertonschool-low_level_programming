#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
*free_grid - free grid from previous task
*@grid: pointer
*@height: height of grid
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
