
#include "main.h"
/**
 * free_grid - a two(2) dimensional array that created before.
 * @grid: pointer to two dimensional grid
 * @height: num of rows
 * Return: freesmemory
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
