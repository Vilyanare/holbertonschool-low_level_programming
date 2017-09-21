#include"holberton.h"
/**
 *print_number - print characters 0 through 9
 *Return: void
 */
void print_number(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + 48);
	putchar('\n');
}
