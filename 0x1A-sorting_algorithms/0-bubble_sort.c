#include "sort.h"

/**
 * bubble_sort - sort an array with bubble sort method
 * @array: array to sort
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int temp = 0, f = 0;
	size_t n = size, i = 0, x = 0;

	for (f = 0; x < size; n--, x++)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				f = 1;
				print_array(array, size);
			}
		}
		if (f == 0)
			break;
	}
}
