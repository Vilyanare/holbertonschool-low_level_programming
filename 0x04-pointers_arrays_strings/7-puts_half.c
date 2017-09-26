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
	x = c - half;
	for (x = x + 1; x <= c; x++)
		_putchar(str[x - 1]);
	_putchar('\n');
}
