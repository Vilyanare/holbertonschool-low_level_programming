#include "variadic_functions.h"
/**
  *printchar - print a char
 *@prnall: char to print
 */
void printchar(va_list prnall)
{
	printf("%c", va_arg(prnall, int));
}
/**
  *printint - print integer
 *@prnall: int to print
 */
void printint(va_list prnall)
{
	printf("%d", va_arg(prnall, int));
}
/**
  *printfloat - print floating point number
 *@prnall: float to print
 */
void printfloat(va_list prnall)
{
	printf("%f", va_arg(prnall, double));
}
/**
  *printstring - print (nil) if NULL or the string
 *@prnall: string to print
 */
void printstring(va_list prnall)
{
	char *s = va_arg(prnall, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 *print_all - prints anything
 *@format: type of arguments sent to function
 */
void print_all(const char * const format, ...)
{
	va_list prnall;
	int x = 0, c = 0;
	char *sep = "\0";
	fmt_t fmt[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
		{NULL, NULL},
	};

	va_start(prnall, NULL);
	while (format[x])
	{
		c = 0;
		while (fmt[c].fmt)
		{
			if (format[x] == fmt[c].fmt[0])
			{
				printf("%s", sep);
				sep = ", ";
				fmt[c].f(prnall);
			}
			c++;
		}
		x++;
	}
	printf("\n");
	va_end(prnall);
}
