#include"holberton.h"
/**
 *print_rev - print a string in reverse order
 *@s: input string to print
 *Return: void
 */
void print_rev(char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		;
	for ( ; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
