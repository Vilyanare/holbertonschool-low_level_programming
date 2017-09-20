#include"holberton.h"
/**
 *print_alphabet - prints alphabet only use _putchar twice
 *Return: always 0
 */
int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
