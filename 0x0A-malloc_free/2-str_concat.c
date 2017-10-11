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
	int x, c;
	char *p = NULL;

	for (x = 0; s1[x]; x++)
		;
	for (c = 0; s2[c]; c++)
		;
	p = malloc((c + x) * sizeof(char));
	if (p == NULL)
		return (NULL);
	x = 0;
	c = 0;
	while (s2[c])
	{
		if (s1[x])
		{
			p[x] = s1[x];
			x++;
		}
		else
		{
			p[x + c] = s2[c];
			c++;
		}
	}
	p[x + c] = '\0';
	return (p);
}
