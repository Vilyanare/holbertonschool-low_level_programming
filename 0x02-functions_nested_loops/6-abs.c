#include"holberton.h"
/**
 *_abs - find absolute value of provide number
 *@n: number to find absolute value of
 *Return: Absolute value of number
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n - n - n;
		return (n);
	}
	else
	{
		return (n);
	}
}
