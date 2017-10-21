#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - prints numbers given as arguments
 *@separator: string to be printed between numbers
 *@n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numprin;
	unsigned int x;

	va_start(numprin, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(numprin, int));
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numprin);
}
