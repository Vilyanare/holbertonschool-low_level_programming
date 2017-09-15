#include<stdio.h>
/**
 *main - print single digit numbers comma and space seperated
 *Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
