#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - exeutes a function given as a parameter on each element of
 *an array
 *@array: Array of data to use functions on
 *@size: size of the array
 *@action: function to use on the data
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
