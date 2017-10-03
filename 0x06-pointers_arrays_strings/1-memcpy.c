#include"holberton.h"
/**
 *_memcpy - copies n bytes from source buffer to destination buffer
 *@dest: destination buffer
 *@src: source buffer
 *@n: number of bytes to be copied
 *Return: pointer to destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x, c;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
