#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up a 2d grid
 * @grid: double pointer 2d grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
int a;
a = 0;
while (a < height)
{
free(grid[a]);
a++;
}
free(grid);
}
