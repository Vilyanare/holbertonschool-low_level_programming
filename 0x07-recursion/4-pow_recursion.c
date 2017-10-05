#include"holberton.h"
/**
 *_pow_recursion - raise an int to a power
 *@x: int to be raised
 *@y: power to be raised to
 *Return: int after raised to new power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
