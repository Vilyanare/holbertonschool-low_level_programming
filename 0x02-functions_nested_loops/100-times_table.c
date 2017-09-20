#include"holberton.h"
/**
 *times_table - list out all multiples of n to n
 *@n: number to be multiplied
 *Return: always void
 */
void print_times_table(int n)
{
	int x, y, product;

	if (n > 0 && n < 16)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				product = x * y;
				if (y != 0)
				{
					if (product / 1000 > 0)
					{
						_putchar(put_digit(4, product));
						_putchar(put_digit(3, product));
						_putchar(put_digit(2, product));
						_putchar(put_digit(1, product));
					}
					else if (product / 100 > 0)
					{
						put_space(1);
						_putchar(put_digit(3, product));
						_putchar(put_digit(2, product));
						_putchar(product % 10 + '0');
					}
					else if (product % 100 / 10 > 0)
					{
						put_space(2);
						_putchar(put_digit(2, product));
						_putchar(product % 10 + '0');
					}
					else
					{
						put_space(3);
						_putchar(product % 10 + '0');
					}
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
 *put_digit - returns ascii value of specified digit place
 *@n: digit wanted
 *@x: number to extract digit from
 *Return: digit
 */
int put_digit(int n, int x)
{
	int result;

	if (n == 4)
		result = x / 1000 + '0';
	else if (n == 3)
		result = x % 1000 / 100 + '0';
	else if (n == 2)
		result = x % 100 / 10 + '0';
	else if (n == 1)
		result = x % 10 + '0';

	return (result);
}
