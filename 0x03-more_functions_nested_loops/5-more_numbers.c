#include"holberton.h"
/**
 *more_numbers - print numbers 0-14 ten times
 *Return: void
 */
void more_numbers(void)
{
	int i, x;

	for (x = 0; x <= 9; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
		}
		_putchar('\n');
	}
}
