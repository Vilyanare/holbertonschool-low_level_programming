#include"holberton.h"
/**
 **_strncat - concatenates two strings only use n bytes from src
 *@dest: original string
 *@src: string to be appended to dest
 *@n: number bytes to take from src
 *Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, x;

	for (c = 0; dest[c]; c++)
		;
	for (x = 0; src[x]; x++)
	{
		if (x >= n)
			break;
		dest[c] = src[x];
		c++;
	}
	dest[c + 1] = '\0';
	return (dest);
}
