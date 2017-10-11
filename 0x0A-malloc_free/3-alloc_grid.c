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
		grid = malloc(sizeof(int *) * height);
		if (grid == NULL)
			return (NULL);
		for (x = 0; x < width; x++)
		{
			grid[x] = malloc(sizeof(int) * width);
			if (grid[x] == NULL)
			{
				for (c = x; c >= 0; c--)
					free(grid[c]);
				free(grid);
				return (NULL);
			}
		}
		for (x = 0; x < height; x++)
		{
			for (c = 0; c < width; c++)
				grid[x][c] = 0;
		}
		return (grid);
	}
	else
		return (NULL);
}
