#include "search_algos.h"

/**
 * binary_recurse - Recursive helper to search an array
 * A smaller array is created by sending new indexs to next recursion
 * @array: pointer to array to be searched
 * @low: bottom index of array
 * @high: top index of array
 * @value: value to search for
 * Return: returns index of found value or -1 if not found
 */
int binary_recurse(int *array, size_t low, size_t high, int value)
{
	size_t mid = high - (high - low) / 2;
	size_t x = 0, new_low = low, new_high = high;

	printf("Searching in array: ");
	for (x = low; x < high; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[high]);

	if (array[mid] == value)
		return (mid);
	if (low == high)
		return (-1);
	if (value > array[mid])
		new_low = mid + 1;
	if (value < array[mid])
		new_high = mid - 1;

	return (binary_recurse(array, new_low, new_high, value));

}
/**
 * binary_search - Searches a sorted array using binary search method
 * checks to see if they are valid then sends them to recursive function
 * @array: array to search
 * @size: length of array
 * @value: value to search for
 * Return: index of found value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (size > 0 && array)
	{
		return (binary_recurse(array, 0, size - 1, value));
	}
	return (-1);
}
