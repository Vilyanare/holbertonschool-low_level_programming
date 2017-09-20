#include<stdio.h>
/**
 *main - print out the first 50 numbers of the fibonacci sequence
 *Return: always 0
 */
int main(void)
{
	long int a, b, c, count;

	a = 1;
	b = 2;
	c = 0;
	for (count = 0; count <= 48; count++)
	{
		printf("%ld", a);
		c = a;
		a = b;
		b = a + c;
		if (count != 50)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
