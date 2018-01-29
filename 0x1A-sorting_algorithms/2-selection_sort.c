#include "sort.h"

/**
 * selection_sort - sort an array using selection sort method
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, x = 0, idx = 0;
	int temp = 0;

	for (; i < size; i++)
	{
		temp = array[i];
		for (idx = i, x = i; x < size; x++)
		{
			if (temp > array[x])
			{
				temp = array[x];
				idx = x;
			}
		}
		if (idx != i)
		{
			array[idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
