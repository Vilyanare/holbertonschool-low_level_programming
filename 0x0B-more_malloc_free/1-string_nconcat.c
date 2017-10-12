#include<stdlib.h>
#include"holberton.h"
/**
 *strlen - find length of a string
 *@s: string to find length of
 *Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int x = 0;

	for (x = 0; s[x]; x++)
		;
	return (x);
}
/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: number of bytes from s2 to concatenate to s1
 *Return: pointer to concatenated string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k = 0, i = 0, x = 0, c = 0;
	char *p = NULL;

	if (s1 != NULL)
		x = _strlen(s1);
	if (s2 != NULL)
		c = _strlen(s2);
	if (n < c)
		c = n;
	p = malloc((c + x + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (i + k < x + c + 1)
	{
		if (i < x)
		{
			p[i] = s1[i];
			i++;
		}
		else
		{
			p[i + k] = s2[k];
			k++;
		}
	}
	p[i + k] = '\0';
	return (p);
}
