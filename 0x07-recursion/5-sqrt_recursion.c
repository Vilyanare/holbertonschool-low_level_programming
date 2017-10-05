#include"holberton.h"
/**
 *find_root - return root
 *@n: number to root
 *@i: integer to multiply
 *Return: Root
 */
int find_root(int n, int i)
{
	if (i * i < n)
		return (1 + find_root(n, i + 1));
	else if (i * i > n)
		return (-1);
	else
		return (1);
}
/**
 *_sqrt_recursion - returns natural square root of a number
 *@n: number to square
 *Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int i = 1, tmp;

	if (n > 0)
		tmp = find_root(n, i);
	if (tmp * tmp == n)
		return (tmp);
	else
		return (-1);
}
