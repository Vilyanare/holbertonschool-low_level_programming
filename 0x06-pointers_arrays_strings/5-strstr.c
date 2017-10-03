#include"holberton.h"
#include<stddef.h>
/**
 *_strstr - find an entire substring in another string then
returns pointer to where substring started
*@haystack: string to be searched
*@needle: string to look for
*Return: pointer to begining of substring or null
*/
char *_strstr(char *haystack, char *needle)
{
	int x, c, f = 0;

	c = 0;
	for (x = 0; haystack[x] >= 0; x++)
	{
		if (needle[c] == '\0' && f == 1)
			return (haystack + x - c);
		if (haystack[x] == needle[c])
		{
			f = 1;
			c++;
		}
		else if (haystack[x] != needle[c])
		{
			c = 0;
			f = 0;
		}
		if (haystack[x] == 0)
			break;
	}
	return (NULL);
}
