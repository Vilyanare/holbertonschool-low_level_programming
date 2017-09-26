#include"holberton.h"
/**
 *print_rev - print a string in reverse order
 *@s: input string to print
 *Return: void
 */
void print_rev(char *s)
{
	int x, c;

	for (x = 0; s[x]; x++)
		;
	c = x;
	for ( ; x >= 0; x--)
	{
		if (x != c)
		_putchar(s[x]);
	}
	_putchar('\n');
}
