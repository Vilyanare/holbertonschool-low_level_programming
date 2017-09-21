#include"holberton.c"
/**
 *print_triangle - prints a triangle with # characters
 *@size: how big you want the triangle to be
 *Return: void
 */
void print_triangle(int size)
{
	int x;

	for (x = 0; x < size; x++)
	{
		for (y = size; y > 1; y--)
			_putchar(' ');
		for (z = 0; z <= x; z++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
