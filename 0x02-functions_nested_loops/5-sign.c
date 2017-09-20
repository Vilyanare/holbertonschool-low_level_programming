#include"holberton.h"
/**
 *print_sign - print + if positive - if negatve and 0 if zero
 *@n: number to be evaluated
 *Return: 1 -1 and 0 respectively
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
