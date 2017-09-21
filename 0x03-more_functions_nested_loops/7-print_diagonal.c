#include"holberton.h"
/**
 *print_diagonal - print a diagonal line onto screen length is determined by
 *input
 *@n: length of line
 *Return: void
 */
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		_putchar('\\');
		_putchar('\n');
		for (i = 0; i < x; i++)
			_putchar(' ');
	}
}
