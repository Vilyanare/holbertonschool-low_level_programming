#include"holberton.h"
/**
 **string_toupper - changes lowercase letters to upppercase
 *@s: string to capitalize
 *Return: address to character str
 */
char *string_toupper(char *s)
{
	int c;

	for (c = 0; s[c]; c++)
	{
		if (s[c] >= 'a' && s[c] <= 'z')
			s[c] -= 32;
	}
	return (s);
}
