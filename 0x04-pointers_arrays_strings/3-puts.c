#include"holberton.h"
/**
 *_puts - print a string followed by new line
 *@str: string to be printed
 *Return: void
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x]; x++)
		_putchar(str[x]);
	_putchar('\n');
}
