#include<stdio.h>
/**
 *main - prints 1-100. for multiples of 3 print Fizz instead of digit
 *for multiples of 5 print Buzz instead of digit
 *for multiples of 3 and 5 print FizzBuzz
 *Return: always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 5 != 0 && x % 3 != 0)
			printf("%d", x);
		else if (x % 5 == 0 && x % 3 == 0)
			printf("FizzBuzz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("Fizz");
		if (x != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
