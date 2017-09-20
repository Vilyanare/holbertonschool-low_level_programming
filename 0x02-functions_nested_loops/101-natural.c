#include<stdio.h>
/**
 *main - prints the sum of all numbers that are divisible by 5 and 3
 *under 1024
 *Return: always 0
 */
int main(void)
{
	int x, count, five, three;

	count = 0;
	x = 0;
	five = 0;
	three = 0;

	while (count < 1020)
	{
		count = 5 * x;
		five += count;
		x++;
	}
	printf("%d\n", count);
	x = 0;
	count = 0;
	while (count < 1023)
	{
		count = 3 * x;
		if (count % 5 != 0)
			three += count;
		x++;
	}
	printf("%d\n", count);
	printf("%d\n", three + five);
	return (0);
}
