#include<stdio.h>
/**
 *main - print all single digits in base 10 with putchar function without data
 *type char
 *Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
