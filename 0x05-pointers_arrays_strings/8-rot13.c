#include"holberton.h"
/**
 *rot13 - encodes string using rot13
 *@s: string to be encoded
 *Return: pointer to s
 */
char *rot13(char *s)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int c, x;

	for (c = 0; s[c]; c++)
	{
		for (x = 0; x < 52; x++)
		{
			if (s[c] == a[x])
			{
				s[c] = rot[x];
				break;
			}
		}
	}
	return (s);
}
