#include "sort.h"

/**
 * swap_int - function to swap the int at two memory addresses and prints array
 * @a: first int
 * @b: second int
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
 * @lo: starting index of the array
 * @hi: last index of the array
 * Return: index of
 */
int partition(int *array, int lo, int hi)
{
	long int p = array[hi];
	long int i = lo - 1, j = lo;
	static int o_hi = 1;

	if (o_hi < hi)
		o_hi = hi + 1;
	for (; j < hi; j++)
	{
		if (array[j] < p)
		{
			i++;
			swap_int(&array[i], &array[j]);
			if (j != i)
				print_array(array, o_hi);
		}
	}
	i++;
	swap_int(&array[i], &array[hi]);
	if (i != hi)
		print_array(array, o_hi);
	return (i);
}
/**
 * quicksort - helper function to split original function into more arguments
 * @array: array to be sorted
 * @lo: first index of array
 * @hi: last index in array
 */
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
