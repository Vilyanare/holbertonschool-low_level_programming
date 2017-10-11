#include<stdlib.h>
#include"holberton.h"
/**
 *_strdup - copies string to new location
 *@str: string to be copied
 *Return: pointer to new string
 */
char *_strdup(char *str)
{
	int x;
	char *p = NULL;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		;
	p = malloc(x * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (x = 0; str[x]; x++)
		p[x] = str[x];
	p[x] = '\0';
	return (p);
}
