#include "search_algos.h"

/**
 * linear_search - Searches an array for input value
 * @array: array to search through
 * @size: length of the array
 * @value: value to search for
 * Return: index of found value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (size > 0 && array)
	{
		for (x = 0; x < size; x++)
		{
			printf("Value checked array[%lu] = [%d]\n", x, array[x]);
			if (array[x] == value)
			{
				return (x);
			}
		}
	}
	return (-1);
}
