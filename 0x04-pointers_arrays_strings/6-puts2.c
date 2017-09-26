#include"holberton.h"
/**
 *puts2 - write one char out of 2 of a input string
 *@str: input string
 *Return: void
 */
void puts2(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
	{
		if (!(x % 2))
			_putchar(str[x]);
	}
}
