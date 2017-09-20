#include"holberton.h"
/**
 *jack_bauer - prints every minute of the day
 *Return: always 0
 */
void jack_bauer(void)
{
	int count, count2;

	for (count = 0; count <= 23; count++)
	{
		for (count2 = 0; count2 <= 59; count2++)
		{
			_putchar(count / 10 + 48);
			_putchar(count % 10 + 48);
			_putchar(':');
			_putchar(count2 / 10 + 48);
			_putchar(count2 % 10 + 48);
			_putchar('\n');
		}
	}
}
