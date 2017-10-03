#include"holberton.h"
/**
 *_memset - fills a buffer with provided char
 *@s: pointer to buffer to fill
 *@b: char to fill buffer with
 *@n: amount of bytes to fill
 *Return: pointer to buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; x < n; x++)
		s[x] = b;

	return (s);
}
