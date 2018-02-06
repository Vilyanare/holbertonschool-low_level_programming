#include "sort.h"

/**
 * setup_temp - function to setup temp array for sorting function
 * @temp: array to be setup
 * @array: original array
 * @size: size of original array
 * @high: size of temp array
 */
void setup_temp(int *temp, int *array, size_t size, size_t high)
{
	size_t i = 0, x = 0;


	for (i = 0; i < high; i++)
		temp[i] = 0;
	for (i = 0; i < size; i++)
		temp[array[i]]++;
	for (i = 0; i < high + 1; i++)
	{
		x = x + temp[i];
		temp[i] = x;
	}
	for (i = high; i <= high; i--)
	{
		if (i == 0)
		{
			temp[i] = 0;
			break;
		}
		temp[i] = temp[i - 1];
	}
}
/**
 * counting_sort - sort using counting method
 * @array: array to sort
 * @size: size of array
 */
void counting_sort(int *array, size_t size)
{
	size_t i = 0, high = 0;
	int *temp = NULL, *final = NULL;

	if (array == NULL || size < 2)
		return;
	for (; i < size; i++)
	{
		if (array[i] > (int)high)
			high = array[i];
	}
	temp = malloc(sizeof(int) * (high + 1));
	if (temp == NULL)
		return;
	final = malloc(sizeof(int) * size);
	if (final == NULL)
	{
		free(temp);
		return;
	}
	setup_temp(temp, array, size, high);
	for (i = 0; i < size; i++)
	{
		final[temp[array[i]]] = array[i];
		temp[array[i]]++;
	}
	for (i = 0; i < size; i++)
		array[i] = final[i];

	print_array(temp, high + 1);
	free(temp);
	free(final);
}
