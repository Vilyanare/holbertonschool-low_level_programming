#include"holberton.h"
/**
 *print_line - Print _ by the number provided from input
 *@n: number of times to print _
 *Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
