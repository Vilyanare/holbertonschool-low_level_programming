#include"holberton.h"
/**
 *puts_half - prints second half of input string
 *@str: input string
 *Return: void
 */
void puts_half(char *str)
{
	int x, half, realsize;

	realsize = sizeof(str) + 2;
	half = realsize / 2;
	if (!(realsize % 2))
		half = (realsize - 1) / 2;
	x = realsize - half;

	for ( ; x <= realsize; x++)
		_putchar(str[x - 1]);
	_putchar('\n');
}
