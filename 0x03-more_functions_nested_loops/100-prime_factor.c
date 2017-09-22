#include<stdio.h>
/**
 *main - find highest prime factor of number and print it
 *Return: always 0
 */
int main(void)
{
	unsigned long int n, x, temp;

	n = 612852475143;
	for (x = 2; x <= n; x++)
	{
		if (n % x == 0)
		{
			n = n / x;
			temp = x;
			x = 1;
		}
	}
	printf("%lu\n", temp);
	return (0);
}
