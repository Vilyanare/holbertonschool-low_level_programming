#include<stdio.h>
/**
 *main - print sum of even fibonacci sequence up to 4 million
 *Return: always 0
 */
int main(void)
{
	long int a, b, c, hold;

	a = 1;
	b = 2;
	c = 0;
	while (a < 4000000)
	{
		if (a % 2 == 0)
			hold += a;
		c = a;
		a = b;
		b = c + a;
	}
	printf("%ld\n", hold);
	return (0);
}
