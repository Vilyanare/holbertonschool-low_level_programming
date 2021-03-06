#include<stdlib.h>
#include"holberton.h"
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string to add to s1
 *Return: pointer to concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, c = 0, i = 0, j = 0;
	char *p = NULL;

	if (s1 != NULL)
	{
		for (x = 0; s1[x]; x++)
			;
	}
	if (s2 != NULL)
	{
		for (c = 0; s2[c]; c++)
			;
	}
	p = malloc((c + x + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i < x || j < c)
	{
		if (i < x)
		{
			p[i] = s1[i];
			i++;
		}
		else
		{
			p[i + j] = s2[j];
			j++;
		}
	}
	p[x + c] = '\0';
	return (p);
}
