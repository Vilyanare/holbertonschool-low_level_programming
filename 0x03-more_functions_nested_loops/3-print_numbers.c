#include"holberton.h"
/**
 *print_numbers - print characters 0 through 9
 *Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + 48);
	_putchar('\n');
}
