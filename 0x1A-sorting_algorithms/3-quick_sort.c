#include "sort.h"

/**
 * print_func - function to help me print whole array
 * @array: array to print
 * @size: size of the array
 */
void print_func(int *array, size_t size)
{
	static int *o_array = ((void *)0);
	static size_t o_size = 1;

	if (o_array == NULL)
		o_array = array;
	if (o_size == 1)
		o_size = size;
	print_array(o_array, o_size);

}
/**
 * swap_int - function to swap the int at two memory addresses and prints array
 * @a: first int
 * @b: second int
 * @array: array to print
 * @size: size of array
 */
void swap_int(int *a, int *b, int *array, size_t size)
{
	int temp = *a;

	*a = *b;
	*b = temp;
	print_func(array, size);
}
/**
 * quick_sort - breaks an array into sections and sorts those sections
 * @array: array to be sorted
 * @size: size of the array to be sorted
 */
void quick_sort(int *array, size_t size)
{
	int pivot = array[size - 1];
	size_t left = 0, right = size - 1;

	while (left < right - 1 && left != right)
	{
		while (array[left] <= pivot && left < right - 1)
			left++;
		while (array[right] >= pivot && right > left + 1)
			right--;
		if (array[left] > pivot && array[right] < pivot)
			swap_int(&array[left], &array[right], array, size);
	}
	if (array[left] > pivot)
	{
		swap_int(&array[left], &array[size - 1], array, size);
		if (size > 1)
		{
			if (left > 0)
				quick_sort(&array[0], left);
			if (size - right > 0)
				quick_sort(&array[right], size - right);
		}
	}
	else if (array[right] > pivot)
	{
		swap_int(&array[right], &array[size - 1], array, size);
		if (size > 1)
		{
			if (right > 0)
				quick_sort(&array[0], right);
			if (size - right - 1 > 0)
				quick_sort(&array[right + 1], size - right - 1);
		}
	}
	else
	{
		if (left > 0)
			quick_sort(&array[0], right);
	}
}
