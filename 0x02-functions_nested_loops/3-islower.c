#include"holberton.h"
/**
 *_islower - checks if character is lower case
 *@c: character to be evaluated
 *Return: always 0
 */
int _islower(int c)
{

	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
