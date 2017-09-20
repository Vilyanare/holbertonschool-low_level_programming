#include"holberton.h"
/**
 *_isalpha - check to see if character is alpha
 *@c: character to be evaluated
 *Return: 1 if alpha 0 if not
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
