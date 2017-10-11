#include"holberton.h"
#include<stddef.h>
/**
 *create_array - creat an array of chars initialized with a char
 *@size: size of the array
 *@c: char to initialize the array with
 *Return: pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *p = NULL;

	if (size < 1)
		return (NULL);
	p = malloc(size * sizeof(char));

	for (x = 0; x < size; x++)
		p[x] = c;
	p[x] = '\0';
	return (p);
}
