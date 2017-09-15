#include<stdio.h>
/**
 *main - output unqiue combos of 2 digits (01 and 10 are not a unique combo
 *Return: always 0
 */
int main(void)
{

	int ch;
	int ch2;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = 48; ch2 <= 57; ch2++)
		{
			if (ch2 > ch)
			{
				putchar(ch);
				putchar(ch2);
				if (ch != 56 || ch2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
