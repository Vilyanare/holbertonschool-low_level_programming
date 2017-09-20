#include"holberton.h"
/**
 *print_to_98 - print all numbers from n to 98
 *commaspace - put a comma and space if number doesn't = 98
 *@n: starting number to print from
 *@x: number for commaspace
 *Return: void
 */
void commaspace(int x)
{
	if (x != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}

void print_to_98(int n)
{
	int count, x;

	if (n > 98)
	{
		for (count = n; count >= 98; count--)
		{
			x = count;
			if (x / 100 != 0)
				_putchar(x / 100 + '0');
			if (x % 100 / 10 != 0 || x >= 100)
				_putchar(x % 100 / 10 + '0');
			_putchar(x % 10 + '0');
			commaspace(x);
		}
	}
	else
	{
		for (count = n; count <= 98; count++)
		{
			x = count;
			if (x < 0)
			{
				_putchar('-');
				x = x - x - x;
			}
			if (x / 100 != 0)
				_putchar(x / 100 + '0');
			if (x % 100 / 10 != 0 || x >= 100)
				_putchar(x % 100 / 10 + '0');
			_putchar(x % 10 + '0');
			commaspace(x);
		}
	}
	_putchar('\n');
}
