#include"holberton.h"
/**
 *_isupper - checks for upper case characters
 *@c: character to be tested
 *Return: 1 if uppper 0 if not
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}
