#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - Finds last digit of last random number n and checks if it is greater
 *than 5, less than 6, or 0
 *Return: always 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	printf("Last digit of %d is %d and is ", n, lastDigit);
	if (lastDigit > 5)
		printf("greater than 5\n");
	else if (lastDigit < 6 && lastDigit != 0)
		printf("less than 6 and not 0\n");
	else
		printf("0\n");
	return (0);
}
