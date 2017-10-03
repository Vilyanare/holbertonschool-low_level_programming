#include"holberton.h"
#include<stddef.h>
/**
 *_strpbrk - find first byte from string 1 that matches any bytes in string 2
 *then return that position
 *@s: string to look through
 *@accept: bytes to look for
 *Return: pointer to the first matching byte
 */
char *_strpbrk(char *s, char *accept)
{
	int x, c;

	for (x = 0; s[x]; x++)
	{
		for (c = 0; accept[c]; c++)
		{
			if (s[x] == accept[c])
				return (s + x);
		}
	}
	return (NULL);
}
