#include<stdio.h>
/**
 *main - print 2 groups of 2 digits as long as they are unique
 *(01 00, and 00 01 are not unique
 *Return: always 0
 */
int main(void)
{
	int j, k;

	for (j = 0; j <= 99; j++)
	{
		for (k = 0; k <= 99; k++)
		{
			if (k > j)
			{
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				putchar(' ');
				putchar(k / 10 + 48);
				putchar(k % 10 + 48);

				if (j != 98 || k != 99)
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
