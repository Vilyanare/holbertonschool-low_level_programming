#include "sort.h"

/**
 * shell_sort - sort an array of ints with the shell method with a gap
 * of gap = gap * 3 + 1
 * @array: array to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i = 0, j = 0;
	int temp = 0, count = 0;

	while (gap < size)
	{
		gap = gap * 3 + 1;
		count++;
	}
	gap = (gap - 1) / 3;

	while (count > 0)
	{
		for (i = 0; i < size; i++)
		{
			j = i;
			while (j <= i)
			{
				if (i >= gap && array[j] < array[j - gap])
				{
					temp = array[j];
					array[j] = array[j - gap];
					array[j - gap] = temp;
				}
				j = j - gap;
			}
		}
		gap = (gap - 1) / 3;
		count--;
		print_array(array, size);
	}
}
