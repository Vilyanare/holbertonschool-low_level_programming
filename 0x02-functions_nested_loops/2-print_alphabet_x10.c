#include"holberton.h"
/**
 *print_alphabet_x10 - prints alphabet 10x only use _putchar twice
 *Return: always 0
 */
int print_alphabet_x10(void)
{
	int ch;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
	return (0);
}
