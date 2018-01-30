#include "sort.h"

/**
 * swap_int - function to swap the int at two memory addresses and prints array
 * @a: first int
 * @b: second int
 * @array: array to print
 * @size: size of array
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
/**
 * partition - splits an array into two arrays based on a pivot
 * @array: array to be partitioned
 * @size: size of the array
 */
int partition(int *array, int lo, int hi)
{
	int p = array[hi];
	int i = lo - 1, j = lo;
	static int o_hi = 1;

	if (o_hi < hi)
		o_hi = hi + 1;
	for (; j < hi; j++)
	{
		if (array[j] < p)
		{
			i++;
			swap_int(&array[i], &array[j]);
			print_array(array, o_hi);
		}
	}
	i++;
	swap_int(&array[i], &array[hi]);
	print_array(array, o_hi);
	return (i);
}

void quicksort(int *array, int lo, int hi)
{
	int p = 0;

	if (lo < hi)
	{
		p = partition(array, lo, hi);
		quicksort(array, lo, p - 1);
		quicksort(array, p + 1, hi);
	}
}
/**
 * quick_sort - breaks an array into sections and sorts those sections
 * @array: array to be sorted
 * @size: size of the array to be sorted
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1);
}
