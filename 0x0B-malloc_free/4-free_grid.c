#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that returns a pointer to a 2D array
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
int x;

if (grid == NULL || height <= 0)
{
return;
}
for (x = 0; x < height; x++)
{
	free(grid[x]);
}
free(grid);

}
