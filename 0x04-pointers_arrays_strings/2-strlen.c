#include"holberton.h"
/**
 *_strlen - find length of a str
 *@s: string to be evaluated
 *Return: length of str
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		;
	return (x);
}
