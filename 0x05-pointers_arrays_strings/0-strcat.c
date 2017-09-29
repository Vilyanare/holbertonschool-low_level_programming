#include"holberton.h"
/**
 **_strcat - concatenates two strings
 *@dest: first string
 *@src: second string to be appended to first
 *Return: pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	int c, x;

	for (c = 0; dest[c]; c++)
		;
	for (x = 0; src[x]; x++)
	{
		dest[c] = src[x];
		c++;
	}
	dest[c + 1] = '\0';
	return (dest);
}
