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
int partition(int *array, int lo, int hi, size_t size)
{
	long int p = array[hi];
	long int i = lo - 1, j = lo;

	for (; j < hi; j++)
	{
		if (array[j] < p)
		{
			i++;
			swap_int(&array[i], &array[j]);
			if (j != i)
				print_array(array, size);
		}
	}
	i++;
	swap_int(&array[i], &array[hi]);
	if (i != hi)
		print_array(array, size);
	return (i);
}
/**
 * quicksort - helper function to split original function into more arguments
 * @array: array to be sorted
 * @lo: first index of array
 * @hi: last index in array
 */
void quicksort(int *array, int lo, int hi, size_t size)
{
	int p = 0;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		quicksort(array, lo, p - 1, size);
		quicksort(array, p + 1, hi, size);
	}
}
/**
 * quick_sort - breaks an array into sections and sorts those sections
 * @array: array to be sorted
 * @size: size of the array to be sorted
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
