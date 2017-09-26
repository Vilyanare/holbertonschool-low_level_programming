#include"holberton.h"
/**
 *print_square - print a square with pound symbols
 *@size: size of the square
 *Return: void
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
			_putchar('#');
		_putchar('\n');
	}
}