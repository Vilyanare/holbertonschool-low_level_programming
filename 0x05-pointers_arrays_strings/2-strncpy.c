#include"holberton.h"
/**
 *_strncpy - copies a string
 *@dest: location to copy the string to
 *@src: string to be copied
 *@n: how much of the string to copy
 *Return: address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c, x;

	for (x = 0; src[x]; x++)
		;
	for (c = 0; c < n; c++)
	{
		if (c > x)
			dest[c] = '\0';
		else
			dest[c] = src[c];
	}
	return (dest);
}
