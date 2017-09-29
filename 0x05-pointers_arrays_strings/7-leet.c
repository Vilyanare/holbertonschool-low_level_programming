#include"holberton.h"
/**
 *leet - encodes string into 1337 speak
 *@s: string to encode
 *Return: address of string
 */
char *leet(char *s)
{
	int c, x;
	char a[] = {'o', 'l', 0, 'e', 'a', 0, 0, 't', 0, 0, 'O', 'L', 0, 'E',
		    'A', 0, 0, 'T'};

	for (c = 0; s[c]; c++)
	{
		for (x = 0; x <= 17; x++)
		{
			if (s[c] == a[x])
				s[c] = x % 10 + 48;
		}
	}
	return (s);
}
