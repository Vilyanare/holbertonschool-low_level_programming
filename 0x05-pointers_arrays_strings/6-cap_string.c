#include"holberton.h"
/**
 *cap_string - capitalize all words in a string
 *@s: string to work on
 *Return: string address
 */
char *cap_string(char *s)
{
	int c, x;
	char a[] = {32, '\t', '\n', 44, 33, 34, 40,
			41, 59, 63, 46, 123, 125};

	for (c = 0; s[c]; c++)
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			for (x = 0; a[x]; x++)
			{
				if (a[x] == s[c - 1])
				{
					s[c] -= 32;
					break;
				}
			}
		}
	}
	return (s);
}
