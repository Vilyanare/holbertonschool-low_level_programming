#include"holberton.h"
/**
 *print_number - print integer passed from input can only use putchar
 *@n: integer to print
 *Return: void
 */
void print_number(int n)
{
	int expon = 1, x = 0, overflow, b = 0;

	if (n > 999999999 || n < -999999999)
	{
		overflow = n % 10;
		n = n / 10;
		b = 1;
	}
	if (n < 0)
	{
		overflow = overflow - overflow - overflow;
		n = n - n - n;
		_putchar('-');
	}
	while (n / expon > 0)
	{
		expon = expon * 10;
		x++;
	}
	for (; x > 1; x--)
	{
		expon = expon / 10;
		_putchar(((n / expon) % 10) + 48);
	}
	_putchar(n % 10 + 48);
	if (b)
		_putchar(overflow + 48);
	_putchar('\n');
	return (0);
}
