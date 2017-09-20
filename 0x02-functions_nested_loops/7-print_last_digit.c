#include"holberton.h"
/**
 *print_last_digit - print last digit of a given number
 *@n: given number
 *Return: last digit of number
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
	{
		result = n - n - n % 10;
		_putchar(result + '0');
		return (result);
	}
	else
	{
		result = n % 10;
		_putchar(result + '0');
		return (result);
	}
}
