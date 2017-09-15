#include<stdio.h>
/**
 *main - print numbers 00 to 99 can only use putchar 5 times in code
 *Return: always 0
 */
int main(void)
{
	int ch1;
	int ch2;

	for (ch1 = 48; ch1 <= 57; ch1++)
	{
		for (ch2 = 48; ch2 <= 57; ch2++)
		{
			putchar(ch1);
			putchar(ch2);
			if (ch1 != 57 || ch2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
