#include"holberton.h"
#include<stddef.h>
/**
 *_strchr - finds provided char in string
 *@s: string to search
 *@c: character to find
 *Return: pointer to first occurance of character
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	if (c == '\0')
		return (s + x);
	return (NULL);
}
