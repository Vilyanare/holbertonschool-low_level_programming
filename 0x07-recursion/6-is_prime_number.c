#include"holberton.h"
/**
 *divisor - check if n is prime
 *@n: number to check
 *@i: divisor
 *Return: 1 if prime
 */
int divisor(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * 2 < n)
		return (divisor(n, i + 1));
	else
		return (1);
}
/**
 *is_prime_number - checks if number is prime
 *@n: number to check
 *Return: 1 if number is prime otherwise 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (divisor(n, i));
}
