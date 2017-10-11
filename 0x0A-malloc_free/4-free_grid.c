#include<stdlib.h>
#include"holberton.h"
/**
 *free_grid - deallocattes memory
 *@grid: array to deallocate
 *@height: height of array to deallocate
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
