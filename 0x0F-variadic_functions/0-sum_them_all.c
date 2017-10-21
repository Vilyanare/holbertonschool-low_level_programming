#include <limits.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 *sum_them_all - Sums all input numbers
 *@n: amount of numbers to sum
 *Return: Sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	int tmp = 0, sum = 0;
	unsigned int x;

	va_start(add, n);
	for (x = 0; x < n; x++)
	{
		tmp = va_arg(add, int);
		if (INT_MAX - sum > tmp)
			sum += tmp;
		else
			return (0);
	}
	va_end(add);
	return (sum);
}
