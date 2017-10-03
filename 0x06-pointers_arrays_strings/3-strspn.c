#include"holberton.h"
/**
 *_strspn - find how man chars from second string are in begining of string 1
 *@s: string to test
 *@accept: string of test chars
 *Return: number of bytes matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, c, i;

	i = 0;
	for (x = 0; s[x]; x++)
	{
		for (c = 0; accept[c] >= 0; c++)
		{
			if (s[x] == accept[c])
			{
				i++;
				break;
			}
			if (accept[c] == '\0')
				return (i);
		}
	}
	return (i);
}
