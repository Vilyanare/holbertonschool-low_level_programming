#include<stdlib.h>
#include"holberton.h"
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: width of array
 *@height: height of the array
 *Return: pointer to array or NULL
 */
int **alloc_grid(int width, int height)
{
	int x, c;
	int **grid = NULL;

	if (width > 0 && height > 0)
	{
		grid = (int **)malloc(sizeof(int *) * height);
		grid[0] = (int *)malloc(sizeof(int) * width * height);
		if (grid[0] == NULL || grid == NULL)
			return (NULL);
		for (x = 0; x < height; x++)
			grid[x] = (*grid + width * x);
		for (x = 0; x < height; x++)
		{
			for (c = 0; c < width; c++)
				grid[x][c] = 0;
		}
	}
	return (grid);
}
