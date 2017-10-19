#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - searches for an integer
 *@array: array of numbers to search
 *@size: size of the array
 *@cmp: function to compare values
 *Return: return index of first element of cmp which doesn't return 0
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int x, f = 0;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (x = 0; x < size; x++)
		{
			f = cmp(array[x]);
			if (f != 0)
				return (x);
		}
	}
	return (-1);
}
