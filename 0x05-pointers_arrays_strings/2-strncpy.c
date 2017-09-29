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
	int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);
}
