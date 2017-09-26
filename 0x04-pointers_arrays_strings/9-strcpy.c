#include"holberton.h"
/**
 **_strcpy - copies string from src to dest
 *@dest: address to put string
 *@src: address to take string from
 *Return: char pointer
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	for (x = 0; src[x]; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
