#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
  * print_strings - prints strings
  *@separator: string to print in between strings
  *@n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prnstr;
	unsigned int x;
	char *temp = NULL;

	va_start(prnstr, n);

	for (x = 0; x < n; x++)
	{
		temp = va_arg(prnstr, char*);
		if (temp != NULL)
			printf("%s", temp);
		else
			printf("(nil)");
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(prnstr);
}
