#include "holberton.h"
/**
 *print_times_table - list out all multiples of n to n
 *@n: number to be multiplied
 *Return: always void
 */
void print_times_table(int n)
{
	int x, y, product;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				product = x * y;
				if (y != 0)
				{
    				        if (product / 100 > 0)
						put_digit(3, product);
					else if (product % 100 / 10 > 0)
						put_digit(2, product);
					else
						put_digit(1, product);
					if (y < n)
						_putchar(',');
				}
				else
				{
					_putchar('0');
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
/**
 *put_space - place spaces with putchar based on x number
 *@x: number of spaces wanted
 *Return: always void
 */
void put_space(int x)
{
	int count;

	for (count = 0; count <= x; count++)
		_putchar(' ');
}
/**
 *put_digit - prints value of specified digit place
 *@n: number of digits to print
 *@x: number to extract digit from
 *Return: digit
 */
void put_digit(int n, int x)
{
	int result, count, space = 4;

	for (count = n; count >= 0; count--)
		space--;
	put_space(space);
	if (n == 4)
	{
		result = x / 1000 + '0';
		_putchar(result);
	}
	if (n >= 3)
	{
		result = x % 1000 / 100 + '0';
		_putchar(result);
	}
	if (n >= 2)
	{
		result = x % 100 / 10 + '0';
		_putchar(result);
	}
	if (n >= 1)
	{
		result = x % 10 + '0';
		_putchar(result);
	}
}
