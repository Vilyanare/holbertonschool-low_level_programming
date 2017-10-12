#include<stdlib.h>
#include"holberton.h"
/**
 *_calloc - allocates memory and sets it to 0
 *@nmemb: number of spaces to allocate
 *@size: size of the spaces
 *Return: pointer to begining of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	void *p = NULL;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < nmemb; x++)
		*((int*)p + x) = 0;
	return (p);
}
