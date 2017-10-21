#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
  *struct formatspecifier - format decider
  *@fmt: format character
  *@f: function to do with said format
  */
typedef struct formatspecifier
{
	char *fmt;
	void (*f)(va_list);
} fmt_t;
/**
  *printchar - print a char
  *@s: character to print
  */
void printchar(va_list(prnall))
{
	printf("%c", va_arg(prnall, int));
}
/**
  *printint - print integer
  *@s: number to print
  */
void printint(va_list(prnall))
{
	printf("%d", va_arg(prnall, int));
}
/**
  *printfloat - print floating point number
  *@s: number to print
  */
void printfloat(va_list(prnall))
{
	printf("%f", va_arg(prnall, double));
}
/**
  *printstring - print (nil) if NULL or the string
  *@s: string to print
  */
void printstring(va_list(prnall))
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
	fmt_t fmt[]= {
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
