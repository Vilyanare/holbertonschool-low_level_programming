#include<stdio.h>
/**
 *main - print all unique combo of 3 digits (201 210 012 102 etc are not unique)
 *Return: always 0
 */
int main(void)
{
	int ch;
	int ch2;
	int ch3;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch2 = 48; ch2 <= 57; ch2++)
		{
			for (ch3 = 48; ch3 <= 57; ch3++)
			{
				if (ch3 > ch2)
				{
					if (ch2 > ch)
					{
						putchar(ch);
						putchar(ch2);
						putchar(ch3);
						if (ch != 55 || ch2 != 56 ||
						    ch3 != 57)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
