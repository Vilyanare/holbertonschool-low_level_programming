#include<stdlib.h>
#include"holberton.h"
/**
 *malloc_checked - allocates memory using malloc
 *@b: how many bytes to allocate
 *Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
