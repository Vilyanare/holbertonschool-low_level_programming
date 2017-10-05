#include "holberton.h"
/**
 *factorial - returns factorial of a given number
 *@n: number to factorize
 *Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
