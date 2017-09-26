#include"holberton.h"
/**
 *puts_half - prints second half of input string
 *@str: input string
 *Return: void
 */
void puts_half(char *str)
{
	int x, half, c;

	for (c = 0; str[c]; c++)
		;
	half = c / 2;
	if (!(c % 2))
		half = (c - 1) / 2;
	x = c - half;

	for ( ; x <= c; x++)
		_putchar(str[x - 1]);
	_putchar('\n');
}
