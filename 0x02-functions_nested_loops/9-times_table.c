#include"holberton.h"
/**
 *times_table - list out all multiples of 9 between 0 and 9
 *Return: always void
 */
void times_table(void)
{
	int x, y, product;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;
			if (y != 0)
			{
				if (product / 100 > 0)
				{
					_putchar(product / 100 + '0');
					_putchar(product % 100 / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product % 100 / 10 > 0)
				{
					_putchar(' ');
					_putchar(product % 100 / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				if (y < 9)
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
