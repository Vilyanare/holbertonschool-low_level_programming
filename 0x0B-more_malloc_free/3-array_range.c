#include<stdlib.h>
#include"holberton.h"
/**
 *array_range - creates an array of integers
 *@min: lowest number in array
 *@max: highest number in array
 *Return: pointer to beggining of array
 */
int *array_range(int min, int max)
{
	int x, c, i;
	int *p = NULL;

	if (min > max)
		return (NULL);
	c = min;
	i = max;
	p = malloc(sizeof p[0] * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (x = 0;c <= i; x++, c++)
		p[x] = c;
	return (p);
}
